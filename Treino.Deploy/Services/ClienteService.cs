namespace Unidas.Deploy.Api.Services
{
    public class ClienteService
    {
        private readonly IConfiguration _configuration;
        public ClienteService(IConfiguration configuration)
        {
            _configuration = configuration;
        }
    }
}
