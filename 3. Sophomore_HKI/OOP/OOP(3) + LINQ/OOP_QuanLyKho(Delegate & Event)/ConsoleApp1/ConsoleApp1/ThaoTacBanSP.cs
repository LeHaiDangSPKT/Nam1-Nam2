using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class ThaoTacBanSP
    {
        public ThaoTacBanSP(Kho kho)
        {
            kho.ban += new Kho.Handler_Ban(BanSP);
        }
        public static void BanSP(Kho sender, KhoEvent e)
        {
            Console.WriteLine("Thuc hien hanh vi: {0}", e.Thongbao);

            Console.WriteLine("Tong so ao ban duoc: {0}", e.Ao);
            sender.tongao -= e.Ao;

            Console.WriteLine("Tong so quan ban duoc: {0}", e.Quan);
            sender.tongquan -= e.Quan;

            Console.WriteLine("Tong so tien: {0}", e.TongTien);
            sender.tienmat += e.TongTien;
        }
    }
}
