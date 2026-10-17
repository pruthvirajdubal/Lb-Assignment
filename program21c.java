// Write a program  to display all factor of given number 

class Logic
{
    void displayFactors(int num)
    {
        System.out.print("Factors of " + num + " are : ");

        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}

class program21c
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}