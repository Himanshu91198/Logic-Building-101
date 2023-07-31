//Approach 2

import java.util.*;

class program349 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();

        String sret = obj.StrLower(name);
        System.out.println("Converted name is : " + sret);

        sret = obj.StrUpper(name);
        System.out.println("Converted name is : " + sret);

        sret = obj.StrToggle(name);
        System.out.println("Converted name is : " + sret);
    }
}

class StringX {
    public String StrLower(String str) {
        // step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        // step 2 : Perform operations on array
        for (int iCnt = 0; iCnt < Arr.length; iCnt++) {
            if ((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')) {
                Arr[iCnt] = (char) (Arr[iCnt] + 32);
            }
        }
        // Step 3 : Convert array to string

        return new String(Arr);

    }

    public String StrUpper(String str) {
        // step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        // step 2 : Perform operations on array
        for (int iCnt = 0; iCnt < Arr.length; iCnt++) {
            if ((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z')) {
                Arr[iCnt] = (char) (Arr[iCnt] - 32);
            }
        }
        // Step 3 : Convert array to string

        String ret = new String(Arr);

        return ret;

    }

    public String StrToggle(String str) {
        // step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        // step 2 : Perform operations on array
        for (int iCnt = 0; iCnt < Arr.length; iCnt++) {
            if ((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z')) {
                Arr[iCnt] = (char) (Arr[iCnt] - 32);
            } else if ((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')) {
                Arr[iCnt] = (char) (Arr[iCnt] + 32);
            }
        }
        // Step 3 : Convert array to string

        String ret = new String(Arr);

        return ret;

    }
}
