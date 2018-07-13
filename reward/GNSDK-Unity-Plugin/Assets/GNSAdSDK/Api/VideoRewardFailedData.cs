using System;

namespace GNSAdSDK.Api
{
    // 動画リワード失敗データ
    public class VideoRewardFailedData : EventArgs
    {
        // アドネットワーク名
        public string AdnetworkName { get; set; }
        // コード
        public int Code { get; set; }
        // メッセージ
        public string Message { get; set; }
    }
}
