using System;
using System.Collections.Generic;
using System.Text;

namespace Test
{
    public delegate void Handler_Rut(ATMEvent e);
    public delegate void Handler_Chuyen(ATMEvent e);

    public class ATM 
    {
        public event Handler_Rut ruttien;
        public event Handler_Chuyen chuyentien;
        public ATM()
        {
            ruttien += RutTien;
            chuyentien += ChuyenTien;
        }

        public void ThucHienRutTien(double tien)
        {
            ATMEvent ev = new ATMEvent("RUT TIEN", tien);
            if (ruttien != null)
            {
                ruttien (ev);
            }
        }
        public void ThucHienChuyenTien(double tien)
        {
            ATMEvent ev = new ATMEvent("CHUYEN TIEN",tien);
            if (chuyentien != null)
            {
                chuyentien(ev);
            }
        }

        public void ChuyenTien(ATMEvent e)
        {
            Console.WriteLine("Thuc hien hanh vi: {0}", e.Thongbao);
            Console.WriteLine("So tien: {0}", e.Giatien);
        }
        public void RutTien(ATMEvent e)
        {
            Console.WriteLine("Thuc hien hanh vi: {0}", e.Thongbao);
            Console.WriteLine("So tien: {0}", e.Giatien);
        }
    }
}
