using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class KhoEvent : EventArgs
    {
        private readonly string thongbao;
        private readonly double tongtien;
        private readonly int ao;
        private readonly int quan;


        public KhoEvent(string thongbao, double tongtien, int ao, int quan)
        {
            this.tongtien = tongtien;
            this.thongbao = thongbao;
            this.ao = ao;
            this.quan = quan;

        }
        public string Thongbao
        {
            get { return thongbao; }
        }
        public double TongTien
        {
            get { return tongtien; }
        }
        public int Ao
        {
            get { return ao; }
        }
        public int Quan
        {
            get { return quan; }
        }
    }
}
