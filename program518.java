import java.util.*;
import java.io.*;

class program518 {
    public static void main(String Arg[]) {

        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];

        System.out.println("------------------Marvellous Packer Unpacker-------------------- ");
        System.out.println("UnPacking Activity of the application is started");

        System.out.println("Enter the file name which contains the packed data : ");
        String PackFile = sobj.nextLine();
        try {

            File Packobj = new File(PackFile);

            FileInputStream inobj = new FileInputStream(Packobj);

            inobj.read(Header, 0, 100);

            String Headerstr = new String(Header);

            System.out.println(Headerstr);

            String Tokens[];
            Tokens = Headerstr.split(" ");

            System.out.println("File name : " + Tokens[0]);
            System.out.println("File length : " + Tokens[1]);
        } catch (Exception obj) {
            System.out.println("Exception Occured : " + obj);
        }
    }
}