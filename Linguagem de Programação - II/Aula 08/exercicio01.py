
        # Torne a classe Conta abstrata #
        
        
from abc import ABC, abstractmethod

class Conta (ABC):
        def __init__ (self, numero, titular, saldo = 0, limite = 1000.0):
                self._numero = numero
                self._titular = titular
                self._saldo = saldo
                self._limite = limite
                
        @abstractmethod
        def sacar(self,valor):
                pass
        
        @abstractmethod
        def depositar(self,valor):
                pass
        
        @abstractmethod
        def tranferir(self, conta_destino, valor):
                pass
        