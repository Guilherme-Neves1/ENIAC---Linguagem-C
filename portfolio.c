int main(int argc, char const *argv[])
{
  printf("\n============ ANIMAIS DO ZOOLOGICO ============\n");

  int especie, qtd_animais; 
  float qtd_kg_dia, custo_dia, res_qtd_kg_dia, res_qtd_kg_mes, res_preco_mes;

  printf("\n1. Onca-Parda\n");
  printf("2. Elefante\n");
  printf("3. Papagaio\n");
  printf("4. Girafa\n");
  printf("5. Orangotango\n");

  // ===== ENTRADA DE DADOS =====
  printf("\nEscolha uma especie: ");
  scanf("%d", &especie);

  printf("Informe a quantidade de animais dessa especie: ");
  scanf("%d", &qtd_animais);

  // ===== PROCESSAMENTO DE DADOS =====
  if (especie == 1) {
    qtd_kg_dia = 8.0;
    custo_dia = 60.0; 
  }

  if (especie == 2) {
    qtd_kg_dia = 25.0;
    custo_dia = 85.0; 
  }

  if (especie == 3) {
    qtd_kg_dia = 0.09;
    custo_dia = 3.0; 
  }

  if (especie == 4) {
    qtd_kg_dia = 12.0;
    custo_dia = 38.0; 
  }

  if (especie == 5) {
    qtd_kg_dia = 5.0;
    custo_dia = 25.0; 
  }

  // Quantidade de kg/dia de comida
  res_qtd_kg_dia = qtd_animais * qtd_kg_dia;

  // Quantidade de kg/mes de comida
  res_qtd_kg_mes = res_qtd_kg_dia * 30;
 
  // Custo de comida por mês
  res_preco_mes = res_qtd_kg_mes * custo_dia;

  // ===== SAÍDA DE DADOS =====
  printf("\n=========================== RESULTADOS ===========================\n");
  printf("\nQuantidade de consumo de alimentos por dia: %.2f Kg", res_qtd_kg_dia);
  printf("\nQuantidade de consumo de alimentos por mes: %.2f Kg", res_qtd_kg_mes);
  printf("\nCusto estimado de gasto em alimentos por mes: R$%.2f\n", res_preco_mes);

  return 0;
}
