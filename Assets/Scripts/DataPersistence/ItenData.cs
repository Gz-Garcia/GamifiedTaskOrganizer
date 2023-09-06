using System;

[Serializable]
public class ItemData {
    public string name;
    public int price;
    public int type;
    public bool owned;

    public ItemData(string iname, int iprice, int itype, bool iowned) {
        name = iname;
        price = iprice;
        type = itype;
        owned = iowned;
    }
}
