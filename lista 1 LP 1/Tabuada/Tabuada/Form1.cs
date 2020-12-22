using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tabuada
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            int numero,resultado;
            numero = Convert.ToInt32(txtNumero.Text);
            listTabuada.Items.Clear();
            for(int i=1;i<=10;i++)
            {
                resultado = numero * i;
                listTabuada.Items.Add(numero + " X " + i + " = " + resultado);
            }
            txtNumero.Clear();
            txtNumero.Focus();
        }
    }
}
