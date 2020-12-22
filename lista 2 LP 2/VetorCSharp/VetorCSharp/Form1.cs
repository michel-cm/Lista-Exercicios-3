using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace VetorCSharp
{
    public partial class Form1 : Form
    {
        // variável global - pode ser acessada por todas funções
        int[] numeros = new int[50];
        double[] numReal = new double[50];
        int cont=0;
        public Form1()
        {
            InitializeComponent();
        }

        void mostra()
        {
            listVetor.Items.Clear();
            for (int i = 0; i < cont; i++)
                listVetor.Items.Add(numeros[i]);
        }
        
        void somaMedia()
        {
            double soma = 0, media;
            for (int i = 0; i < cont; i++)
                soma += numeros[i];

            media = soma / cont;
            lblResultado.Text = "Soma:" + soma + " Media:" + Math.Round(media,2);
        }
        
        private void btnAdd_Click(object sender, EventArgs e)
        {
            numeros[cont] =Convert.ToInt32(txtNumero.Text);
            cont++;
            mostra();
            somaMedia();
            txtNumero.Clear();
            txtNumero.Focus();
        }

        private void btnBusca_Click(object sender, EventArgs e)
        {
            int busca = Convert.ToInt32(txtBusca.Text);
            int qtd = 0;
            for(int i = 0; i < cont; i++)
            {
                if (numeros[i] == busca)
                    qtd++;
            }// fim for
            MessageBox.Show("O valor " + busca + 
                           " existe " + qtd + " vez(es) no vetor");
        }
    }
}
