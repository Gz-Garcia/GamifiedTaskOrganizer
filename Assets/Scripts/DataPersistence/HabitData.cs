using System;

[Serializable]
public class HabitData
{
    public int hcode;
    public string hname;
    public string hdescription;
    public int hstate;

    public HabitData(int hcode, string hname, string hdescription, int hstate) {
        this.hcode = hcode;
        this.hstate = hstate;
        this.hname = hname;
        this.hdescription = hdescription;
    }
}
