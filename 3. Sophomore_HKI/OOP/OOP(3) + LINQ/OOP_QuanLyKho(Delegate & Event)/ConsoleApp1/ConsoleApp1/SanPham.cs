using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class SanPham
    {
        public SanPham() { }
        public double gia_goc;
        public double gia_ban;
        public void TaoHang(SanPham sp)
        {
            Console.Write("\tBuoc 1: Nhap so tien nhap vao (ngan): ");
            sp.gia_goc = double.Parse(Console.ReadLine());
            Console.Write("\tBuoc 2: Nhap so tien ban ra(ngan): ");
            sp.gia_ban = double.Parse(Console.ReadLine());
        }

    }
}
