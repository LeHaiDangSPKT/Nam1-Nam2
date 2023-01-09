using System;
using System.Collections.Generic;
using System.Text;

namespace Test
{
    public class ATMEvent
    {
        private readonly string thongbao;
        private readonly double giatien;

        public ATMEvent(string thongbao, double giatien)
        {
            this.giatien = giatien;
            this.thongbao = thongbao;
        }
        public string Thongbao
        {
            get { return thongbao; }
        }
        public double Giatien
        {
            get { return giatien; }
        }
    }
}
