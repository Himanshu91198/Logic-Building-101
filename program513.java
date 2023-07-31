import java.util.*;
import java.io.*;

class program513 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder: ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        String Header = null;

        try {
            boolean bRet = fobj.isDirectory();
            if (bRet == true) {
                File List[] = fobj.listFiles();

                for (int i = 0; i < List.length; i++) {
                    if ((List[i].getName()).endsWith(".txt")) {
                        Header = List[i].getName() + " " + List[i].length();
                        for (int j = Header.length(); j < 100; j++) {
                            Header = Header + " ";
                        }

                        System.out.println(Header);
                        System.out.println(Header.length());
                    }
                }
            }
        } catch (Exception iobj) {
            System.out.println("Exception occured : " + iobj);
        }
    }
}