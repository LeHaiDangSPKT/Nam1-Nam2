using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class ThaoTacNhapSP<T> where T : SanPham
    {

        public ThaoTacNhapSP(Kho<T> kho)
        {
            kho.nhap += new Kho<T>.Handler_Nhap(NhapSP);
        }
        public static void NhapSP(Kho<T> sender, KhoEvent e)
        {
            Console.WriteLine("Thuc hien hanh vi: {0}", e.Thongbao);

            Console.WriteLine("Tong ao da them: {0}", e.Ao);
            sender.tongao += e.Ao;

            Console.WriteLine("Tong quan da them: {0}", e.Quan);
            sender.tongquan += e.Quan;

            Console.WriteLine("Tong so tien: {0}", e.TongTien);
            sender.tienmat -= e.TongTien;
           

        }
    }
}
