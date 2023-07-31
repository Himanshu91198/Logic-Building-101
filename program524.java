import java.util.*;

class program524 {
    public static void main(String Arg[]) {
        DBMS obj = new DBMS();
        obj.StartDBMS();

        obj.InsertIntoTable("Rahul", 23, 89);
        obj.InsertIntoTable("Sagar", 26, 98);
        obj.InsertIntoTable("Pooja", 20, 56);
        obj.InsertIntoTable("Sayali", 30, 78);
        obj.InsertIntoTable("Tejas", 29, 68);

        obj.SelectForm();
        obj.SelectForm(4);
        obj.SelectForm("Tejas");

        System.out.println("Maximum marks are: " + obj.Aggregate_Max());
        System.out.println("Minimum marks are: " + obj.Aggregate_Min());
        System.out.println("Addition marks are: " + obj.Aggregate_Sum());
        System.out.println("Average marks are: " + obj.Aggregate_Average());

        obj.DeleteForm(4);
        obj.SelectForm();
    }
}

class Student {
    public int Rno;
    public String Name;
    public int Age;
    public int Marks;

    public static int Generator;

    static {
        Generator = 0;
    }

    public Student(String str, int X, int Y) {
        this.Rno = ++Generator;
        this.Name = str;
        this.Age = X;
        this.Marks = Y;
    }

    public void Display() {
        System.out.println(this.Rno + " " + this.Name + " " + this.Age + " " + this.Marks);
    }
}

class DBMS {
    public LinkedList<Student> lobj;

    public DBMS() {
        lobj = new LinkedList<Student>();
    }

    public void StartDBMS() {
        System.out.println("Marvellous DBMS started successfully....");
        System.out.println("Table Schema created successfully....");
    }

    // Insert into table student values(_____, ____, ______)
    public void InsertIntoTable(String Name, int Age, int Marks) {
        Student sobj = new Student(Name, Age, Marks);
        lobj.add(sobj);
    }

    // select * from student
    public void SelectForm() {
        System.out.println("Records from the student table are : ");

        for (Student sref : lobj) {
            sref.Display();
        }
    }

    // select * from student where Rno = 11
    public void SelectForm(int no) {

        for (Student sref : lobj) {
            if (sref.Rno == no) {
                sref.Display();
                break;
            }
        }
    }

    // select * from student where Name = Sayali
    public void SelectForm(String str) {

        for (Student sref : lobj) {
            if (sref.Name.equals(str)) {
                sref.Display();
                break;
            }
        }
    }

    // delete from student where Rno = 2
    public void DeleteForm(int no) {

        int i = 0;
        for (Student sref : lobj) {
            if (sref.Rno == no) {
                lobj.remove(i);
                break;
            }
            i++;
        }
    }

    // select MAX(marks) from student
    public int Aggregate_Max() {
        Student temp = lobj.get(0);
        int iMax = temp.Marks;

        for (Student sref : lobj) {
            if (sref.Marks > iMax) {
                iMax = sref.Marks;
            }
        }
        return iMax;
    }

    // select MIN(marks) from student
    public int Aggregate_Min() {
        Student temp = lobj.get(0);
        int iMin = temp.Marks;

        for (Student sref : lobj) {
            if (sref.Marks < iMin) {
                iMin = sref.Marks;
            }
        }
        return iMin;
    }

    // select SUM(Marks) from student
    public int Aggregate_Sum() {

        int iSum = 0;
        for (Student sref : lobj) {
            iSum += sref.Marks;
        }
        return iSum;
    }

    // select AVERAGE(Marks) from student
    public double Aggregate_Average() {

        double iSum = 0.0;
        for (Student sref : lobj) {
            iSum += sref.Marks;
        }
        return (iSum / (lobj.size()));
    }
}