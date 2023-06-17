#include <string>
#include <grpcpp/grpcpp.h>
#include "ProtoBuf/GenerateRS/GenerateRS.grpc.pb.h"
#include "ProtoBuf/GenerateRS/GenerateRS.pb.h"
#include "iOSDevice.h"
namespace aid2 {
	using namespace std;
	using grpc::Channel;
	using AppleRemoteAuth::aid;

	class aidClient {
	public:
		aidClient(std::shared_ptr<Channel> channel)
			: stub_(aid::NewStub(channel)) {};
		bool RemoteGetGrappa(string udid, string& grappa, unsigned long& grappa_session_id);
		bool RemoteGetRs(iOSDevice * const pDevice, unsigned long grappa_session_id, string& rs, string& rs_sig);
		static aidClient* Instance();
	private:
		std::unique_ptr<aid::Stub> stub_;
	};
}