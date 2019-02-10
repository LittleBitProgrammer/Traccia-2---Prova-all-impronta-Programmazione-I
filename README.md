# Traccia 2 - Prova all'impronta Programmazione I #

Sviluppare una function C che, dato come parametro di input un array di tipo struct punto { double x; double y} e il suo size, determina e restituisce come parametri di autput gli indici dei due punti che hanno DISTANZA MINIMA tra loro. I campi x e y contengono l'ascissa e l'ordinata, rispettivamente, di un punto.

# Soluzione spiegata #
Supponiamo di avere un array formato da 6 elementi, se volessimo iterare ogni elemento dell'array con gli altri avremo i seguenti confronti: 

0,1 | 1,0 | 2,0 | 3,0 | 4,0 | 5,0 |

0,2 | 1,1 | 2,1 | 3,1 | 4,1 | 5,1 |

0,3 | 1,2 | 2,3 | 3,2 | 4,2 | 5,2 |

0,4 | 1,4 | 2,4 | 3,4 | 4,3 | 5,3 |

0,5 | 1,5 | 2,5 | 3,5 | 4,5 | 5,4 |


Ma possiamo notare che confrontare 1,0 e successivamente 0,1 non ha molto senso, quindi l'algoritmo descriverà le seguenti iterazioni:

0,1 | 0,2 | 0,3 | 0,4 | 0,5 |

1,2 | 1,3 | 1,4 | 1,5 |

2,3 | 2,4 | 2,5 |

3,4 | 3,5 |

4,5 |

