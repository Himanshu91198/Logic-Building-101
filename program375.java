import java.util.*;

class program370 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        String arr[] = str.split(" ");

        System.out.println("Enter a word that you want to search : ");
        String Word = sobj.nextLine();

        int iCnt = 0;
        int iFrequency = 0;
        for (String s : arr) {
            if (s.equals(Word)) {
                iFrequency++;
            }
        }
        System.out.println("No. of times india is : " + iFrequency);
    }
}