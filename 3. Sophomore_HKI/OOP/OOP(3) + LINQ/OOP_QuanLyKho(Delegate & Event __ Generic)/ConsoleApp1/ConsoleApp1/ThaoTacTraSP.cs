using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class ThaoTacTraSP<T> where T : SanPham
    {
        public ThaoTacTraSP(Kho<T> kho)
        {
            kho.tra += new Kho<T>.Handler_Tra(TraSP);
        }
        public static void TraSP(Kho<T> sender, KhoEvent e)
        {
            Console.WriteLine("Thuc hien hanh vi: {0}", e.Thongbao);

            Console.WriteLine("Tong ao tra: {0}", e.Ao);
            sender.tongao -= e.Ao;

            Console.WriteLine("Tong quan tra: {0}", e.Quan);
            sender.tongquan -= e.Quan;

            Console.WriteLine("Tong so tien: {0}", e.TongTien);
            sender.tienmat += e.TongTien;
        }
    }
}
