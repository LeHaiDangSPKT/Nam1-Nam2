using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class ThaoTacNhapSP
    {

        public ThaoTacNhapSP(Kho kho)
        {
            kho.nhap += new Kho.Handler_Nhap(NhapSP);
        }
        public static void NhapSP(Kho sender, KhoEvent e)
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
