import java.util.*;

class program370 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        String arr[] = str.split(" ");

        int iCnt = 0;
        int iFrequency = 0;
        for (iCnt = 0; iCnt < arr.length; iCnt++) {
            if (arr[iCnt].equals("India")) {
                iFrequency++;
            }
        }
        System.out.println("No. of times india is : " + iFrequency);
    }
}