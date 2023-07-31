import java.util.*;

class program341 {

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmstrong(iNo);

        if (bRet == true) {
            System.out.println("Number is Armstrong");
        } else {
            System.out.println("Number is not Armstrong");
        }
    }
}

class Digits {
    int CountDigits(int iNo) {
        int iCount = 0;
        while (iNo != 0) {
            iCount++;
            iNo = iNo / 10;
        }
        return iCount;
    }

    int Power(int X, int Y) {
        int iPower = 1;

        for (int iCnt = 1; iCnt <= Y; iCnt++) {
            iPower = iPower * X;
        }
        return iPower;
    }

    boolean CheckArmstrong(int iNo) {
        int iCount = 0, iDigit = 0;
        iCount = CountDigits(iNo);

        int iTemp = iNo;
        int iSum = 0;

        while (iNo != 0) {
            iDigit = iNo % 10;
            iSum = iSum + Power(iDigit, iCount);
            iNo = iNo / 10;
        }

        if (iSum == iTemp) {
            return true;
        } else {
            return false;
        }
    }
}
