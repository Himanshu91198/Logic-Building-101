// Approach 2

import java.util.*;

class program336 {

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountDigits(iNo);

        System.out.println("No of Digits are :" + iRet);
    }
}

class Digits {
    public int CountDigits(int iValue) {
        int iCnt = 0;
        while (iValue != 0) {
            iCnt++;
            iValue = iValue / 10;
        }
        return iCnt;
    }

}
