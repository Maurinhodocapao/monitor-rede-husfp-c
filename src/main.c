#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=====================\n");
    printf("  MONITOR DE REDE\n");
    printf("  HUSFP - Mauro Amaral\n");
    printf("=====================\n\n");
    
    // Testar conexão com internet
    printf("📡 Testando conectividade com Google...\n");
    int status = system("ping -c 1 8.8.8.8 > /dev/null 2>&1");
    
    if (status == 0) {
        printf("✅ Internet: CONECTADA\n");
        printf("   Servidor: 8.8.8.8 (Google)\n");
        printf("   Status: Disponível\n");
    } else {
        printf("❌ Internet: SEM CONEXÃO\n");
        printf("   Verifique sua rede Wi-Fi/4G\n");
    }
    
    // Testar DNS
    printf("\n🌐 Testando DNS...\n");
    int dns_status = system("ping -c 1 google.com > /dev/null 2>&1");
    
    if (dns_status == 0) {
        printf("✅ DNS: FUNCIONANDO\n");
    } else {
        printf("⚠️  DNS: COM PROBLEMAS\n");
    }
    
    printf("\n🔄 Monitoramento em tempo real...\n");
    printf("⏰ Tempo de funcionamento: 0 segundos\n");
    
    return 0;
}
