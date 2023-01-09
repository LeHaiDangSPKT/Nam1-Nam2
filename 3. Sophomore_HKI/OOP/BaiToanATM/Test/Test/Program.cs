using System;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            ATM atm = new ATM();
            atm.ThucHienRutTien(5000);
            Console.WriteLine();
            atm.ThucHienChuyenTien(2000);
        }
    }
}
