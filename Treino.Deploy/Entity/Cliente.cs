using MongoDB.Bson;
using MongoDB.Bson.Serialization.Attributes;

namespace Unidas.Deploy.Api.Entity
{
    public class Cliente
    {
        [BsonId]
        public ObjectId Id { get; set; }
        [BsonElement("nome")]
        public string Nome { get; set; }
        [BsonElement("telefone")]
        public string Telefone { get; set; }
        [BsonElement("email")]
        public string Email { get; set; }             
    }
}
