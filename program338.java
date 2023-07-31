// Approach 2

import java.util.*;

class program338 {

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.SumDigits(iNo);

        System.out.println("Sum of Digits is :" + iRet);
    }
}

class Digits {
    public int SumDigits(int iValue) {
        int iDigit = 0;
        int iSum = 0;
        while (iValue != 0) {
            iDigit = iValue % 10;
            iSum += iDigit;
            iValue = iValue / 10;
        }
        return iSum;
    }

}
