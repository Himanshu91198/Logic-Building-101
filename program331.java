// Approach 2

import java.util.*;

class program331 {

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.EvenFact(iNo);

        System.out.println("Multiplication of Even Factors is :" + iRet);
    }
}

class Numbers {
    public int EvenFact(int iValue) {
        int iMult = 1;
        for (int iCnt = 1; iCnt <= iValue; iCnt++) {
            if ((iValue % iCnt) == 0 && (iCnt % 2) == 0) {
                iMult *= iCnt;
            }
        }
        return iMult;
    }

}
