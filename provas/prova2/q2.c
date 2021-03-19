void * primeiraOcorrencia(int *v, int x) {
  
  int i;

  for(i = 0; i < sizeof(v) ; i++) {
    if(*(v + i) == x) return (v + i);
  }
}
