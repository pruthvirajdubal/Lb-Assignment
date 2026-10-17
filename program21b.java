// Write a program to count how many even and odd number and present between 1 and N

class Logic
{
    void countEvenOddRange(int n)
    {
        int evenCount = 0, oddCount = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        System.out.println("Even numbers : " + evenCount);
        System.out.println("Odd numbers  : " + oddCount);
    }
}

class program21b
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}