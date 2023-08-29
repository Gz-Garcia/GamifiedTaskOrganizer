using System;

using UnityEngine;

public class ModalManager : MonoBehaviour
{
    [SerializeField] protected ModalDatabase m_ModalDatabase;
    [SerializeField] protected string m_DefaultIdentifier = "Message";

    private static ModalManager s_Instance;

    private static ModalManager Instance
    {
        get { return s_Instance; }
    }

    public void OnEnable()
    {
        s_Instance = this;
    }

    private void OnDisable()
    {
        s_Instance = null;
    }

    public static Modal Show(string title, string body, ModalButton[] buttons)
    {
        return Instance.InternalShow(Instance.m_DefaultIdentifier, new GenericModalContent() { Title = title, Body = body }, buttons);
    }

    public static Modal Show(string identifier, ModalContentBase modalContent, ModalButton[] modalButton)
    {
        return Instance.InternalShow(identifier, modalContent, modalButton);
    }

    private Modal InternalShow(string identifier, ModalContentBase modalContent, ModalButton[] modalButton)
    {
        GameObject modalObj = m_ModalDatabase.GetModal(identifier);
        if (modalObj == null)
        {
            Debug.LogError("Error! Failed to get a modal prefab with the identifier: " + identifier + ". Ensure that the identifier matches the one in the database");
            return null;
        }

        GameObject clone = Instantiate(modalObj, transform);
        var modal = clone.GetComponent<Modal>();
        modal.Show(modalContent, modalButton);
        return modal;
    }

#if UNITY_2019_3_OR_NEWER
        /// <summary>
        /// Reset the static variables for domain reloading.
        /// </summary>
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        private static void DomainReset()
        {
            s_Instance = null;
        }
#endif
}
