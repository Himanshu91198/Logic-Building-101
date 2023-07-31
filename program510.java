import java.util.*;
import java.io.*;

class program510 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder: ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        try {
            boolean bRet = fobj.isDirectory();
            if (bRet == true) {
                File List[] = fobj.listFiles();

                for (int i = 0; i < List.length; i++) {
                    System.out.println("File name : " + List[i].getName() + "File size : " + List[i].length());
                }
            }
        } catch (Exception iobj) {
            System.out.println("Exception occured : " + iobj);
        }
    }
}