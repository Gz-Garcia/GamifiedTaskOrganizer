using System;

[Serializable]
public class TaskData
{
    public string tcode;
    public string tname;
    public string tdescription;
    public int tdificulty;
    public string tduedate;
    public string tcompletedate;
    public int tstate;

    public TaskData(string tcode, string tname, string tdescription, 
    int tdificulty, string tduedate, string tcompletedate, int tstate) {
        this.tcode = tcode;
        this.tname = tname;
        this.tdescription = tdescription;
        this.tdificulty = tdificulty;
        this.tduedate = tduedate;
        this.tcompletedate = tcompletedate;
        this.tstate = tstate;
    }
}
