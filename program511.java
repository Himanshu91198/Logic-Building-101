import java.util.*;
import java.io.*;

class program511 {
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
                    Header = List[i].getName() + " " + List[i].length();
                    System.out.println(Header);
                }
            }
        } catch (Exception iobj) {
            System.out.println("Exception occured : " + iobj);
        }
    }
}