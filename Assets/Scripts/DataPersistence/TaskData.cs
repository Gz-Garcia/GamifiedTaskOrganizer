using System;

[Serializable]
public class TaskData
{
    public int tcode;
    public string tname;
    public string tdescription;
    public int tstate;

    public TaskData(int tcode, string tname, string tdescription, int tstate) {
        this.tcode = tcode;
        this.tstate = tstate;
        this.tname = tname;
        this.tdescription = tdescription;
    }
}
