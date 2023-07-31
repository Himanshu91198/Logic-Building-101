import java.util.*;
import java.io.*;

class program515 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder: ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        String Header = null;

        System.out.println("Enter the name of packed file that you want to create: ");
        String PackFile = sobj.nextLine();

        byte Buffer[] = new byte[1024];
        int iRet = 0;
        try {

            File Packobj = new File(PackFile);
            boolean bRet = Packobj.createNewFile();
            if (bRet == false) {
                System.out.println("Unable to create packed file");
                return;
            }

            FileOutputStream outobj = new FileOutputStream(Packobj);

            bRet = fobj.isDirectory();
            if (bRet == true) {
                File List[] = fobj.listFiles();

                for (int i = 0; i < List.length; i++) {
                    if ((List[i].getName()).endsWith(".txt")) {
                        Header = List[i].getName() + " " + List[i].length();
                        for (int j = Header.length(); j < 100; j++) {
                            Header = Header + " ";
                        }
                        byte bHeader[] = Header.getBytes();
                        outobj.write(bHeader, 0, bHeader.length);

                        FileInputStream inobj = new FileInputStream(List[i]);
                        while ((iRet = inobj.read(Buffer)) != -1) {
                            outobj.write(Buffer, 0, iRet);
                        }

                        inobj.close();
                    }
                }
            }
        } catch (Exception iobj) {
            System.out.println("Exception occured : " + iobj);
        }
    }
}