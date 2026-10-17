// write a program to calculate the prduct of digit of a number
class Logic
{
    void productOfDigits(int num)
    {
        if (num < 0)
        {
            num = -num;
        }

        int product = 1;
        int temp = num;

        while (temp != 0)
        {
            product = product * (temp % 10);
            temp = temp / 10;
        }

        System.out.println("Product of digits of " + num + " is : " + product);
    }
}

class program21a
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}