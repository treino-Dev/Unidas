using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;

namespace Unidas.Deploy.Api.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class ClienteController : ControllerBase
    {
        private readonly IConfiguration _configuration;
        public ClienteController(IConfiguration configuration)
        {
            _configuration = configuration;
        }
    }
}
