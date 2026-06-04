// SPDX-License-Identifier: MIT
// cctest_csmith_1d855b6c.c --- cctest case csmith_1d855b6c (csmith seed 495278956)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x31a5d875 */
/* @exp_ticks 0x507 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 495278956 -o /home/agent1/fast_data/tmp/csmith_gen_fc6kp4h0/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   const uint16_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
};


static union U1 g_17 = {0x466BC657L};
static uint64_t g_41 = 3UL;
static int32_t g_48 = 0xE1984BBCL;
static int16_t g_83 = 1L;
static int32_t g_98 = 0L;
static int64_t g_106 = 1L;
static int64_t g_116 = 1L;
static int64_t g_117 = 0x5926F2DC12F6744ELL;
static int8_t g_122 = 0xD8L;
static uint32_t g_123 = 0x627CDBDBL;
static uint32_t g_127 = 0x7E5C3585L;
static int64_t g_134 = 0L;
static int8_t g_146 = 0xDFL;
static uint32_t g_168[3][5] = {{0UL,4294967292UL,0UL,0UL,4294967292UL},{4294967292UL,0UL,0UL,4294967292UL,0UL},{4294967292UL,4294967292UL,6UL,4294967292UL,4294967292UL}};
static int64_t g_214 = 0x5227D837D6E8952BLL;
static int16_t g_218 = 0x1ADFL;



static int32_t  func_1(void);
static int32_t  func_10(union U1  p_11, union U1  p_12);
static union U1  func_13(union U1  p_14, int8_t  p_15, uint64_t  p_16);
static uint32_t  func_18(uint16_t  p_19, int16_t  p_20, int8_t  p_21, uint32_t  p_22, int8_t  p_23);




static int32_t  func_1(void)
{ 
    int32_t l_8[5][5] = {{0xEC752F67L,0xB0D193E0L,0xEC752F67L,0xABFC3938L,0xC662A2B3L},{(-1L),(-8L),(-8L),(-1L),(-8L)},{0xC662A2B3L,0xB0D193E0L,0x06310FECL,0xB0D193E0L,0xC662A2B3L},{(-8L),(-1L),(-8L),(-8L),(-1L)},{0xC662A2B3L,0xABFC3938L,0xEC752F67L,0xB0D193E0L,0xEC752F67L}};
    int32_t l_33 = 0x5520F303L;
    uint8_t l_34 = 0x9CL;
    union U1 l_101[4] = {{0x71715C74L},{0x71715C74L},{0x71715C74L},{0x71715C74L}};
    int i, j;
    g_218 = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_8[1][4], 7)), ((~func_10(func_13(g_17, ((func_18((l_33 ^= ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((!0x96711DB6084EDC02LL), 3)), (safe_sub_func_int64_t_s_s(((0xD5L == g_17.f0) || l_8[3][3]), 0x281C1D99EA5D840DLL)))) ^ l_8[4][0]), 14)) || g_17.f0)), l_34, g_17.f0, g_17.f0, g_17.f0) > 0x3FDF2DC1L) > 3UL), g_17.f0), l_101[1])) , g_127))), 3));
    return g_146;
}



static int32_t  func_10(union U1  p_11, union U1  p_12)
{ 
    int32_t l_107 = 0x7FF9E38BL;
    int32_t l_119 = 0xA27851EDL;
    int64_t l_165 = (-10L);
    if ((g_48 = (l_107 = (((safe_rshift_func_uint16_t_u_s((g_106 |= ((p_11.f0 > (g_48 >= 0x00L)) > (1UL == 65535UL))), 11)) > p_11.f0) > 255UL))))
    { 
        int16_t l_118[5][1][4] = {{{0x7196L,0x7196L,(-10L),(-3L)}},{{8L,0x7196L,8L,(-10L)}},{{8L,(-10L),(-10L),8L}},{{(-10L),(-10L),(-3L),(-10L)}},{{(-10L),0x7196L,(-3L),(-3L)}}};
        int32_t l_120 = 0x43182763L;
        int i, j, k;
        for (g_48 = 0; (g_48 <= 8); g_48++)
        { 
            int32_t l_121 = 0L;
            int32_t l_145 = 0x8DCB9C1BL;
            l_120 = (safe_mul_func_uint8_t_u_u(l_107, ((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((l_119 = ((g_123++) & (safe_unary_minus_func_uint32_t_u(4294967290UL)))), (-1L))), 0x83892296L)) , 0x99L)));
            if (p_12.f0)
            { 
                ++g_127;
                if (l_119)
                    break;
                g_134 = ((safe_lshift_func_int16_t_s_s((l_118[0][0][0] , (-9L)), (g_48 > ((((safe_lshift_func_int16_t_s_s((((p_12.f0 | l_119) < l_120) < g_122), 11)) > g_41) == 0x7DE0L) > g_116)))) >= 0x8202A807L);
            }
            else
            { 
                const struct S0 l_135 = {0x15BDL,65530UL,0x002FA5D7L};
                l_107 |= (p_12.f0 , ((-1L) >= (l_120 = (l_135 , (l_135.f1 < 1L)))));
            }
            if ((0x19F0L > ((safe_sub_func_uint64_t_u_u((p_11.f0 ^ (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((+(l_120 = (l_145 = ((g_98 = l_118[3][0][0]) , g_122)))) <= 0xC0CEL), 0xD813A62BL)), l_121)), 1UL))), 0xF175425EB3672896LL)) != 0x4DL)))
            { 
                g_146 = (0xA426L != p_11.f0);
                if (g_106)
                    break;
            }
            else
            { 
                uint64_t l_147 = 18446744073709551606UL;
                l_147--;
            }
        }
        for (g_116 = 0; (g_116 < 3); g_116 = safe_add_func_int8_t_s_s(g_116, 5))
        { 
            return p_12.f0;
        }
    }
    else
    { 
        return p_11.f0;
    }
    if (l_119)
    { 
        int32_t l_164 = (-1L);
        int32_t l_166 = (-10L);
        for (g_134 = 0; (g_134 == (-25)); g_134 = safe_sub_func_int64_t_s_s(g_134, 4))
        { 
            uint32_t l_154 = 0x85D38864L;
            int32_t l_155 = 0x11DC0D21L;
            l_155 = l_154;
        }
        l_119 &= (l_166 |= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_48, ((safe_sub_func_int32_t_s_s((((g_41 = ((safe_sub_func_uint32_t_u_u(((l_165 = l_164) | g_98), l_164)) >= g_127)) && p_11.f0) == g_116), g_134)) < l_164))), 0L)));
    }
    else
    { 
        int16_t l_167 = (-4L);
        uint32_t l_185 = 0xF18804D5L;
        struct S0 l_188 = {-5L,1UL,0x46011D50L};
        int32_t l_196 = 3L;
        g_168[2][1]++;
        for (g_116 = 2; (g_116 >= 0); g_116 -= 1)
        { 
            uint64_t l_186 = 0x4C00339178996BACLL;
            struct S0 l_187 = {2L,1UL,0x72044F22L};
            int32_t l_195 = 0x085BF0B6L;
            uint64_t l_212 = 0x37247A2C6987CFA7LL;
            uint32_t l_213 = 1UL;
            g_48 |= ((((((safe_sub_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_106, ((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(0x123B5FEBL, (safe_lshift_func_uint8_t_u_u(l_165, (safe_mul_func_uint16_t_u_u(g_83, 0x2DCCL)))))), p_12.f0)) < g_168[2][4]))), l_185)) | l_167) || l_186), g_98)) , p_11.f0) , l_187) , g_127) , (-3L)) | l_187.f2);
            g_48 = ((l_188 , ((-10L) >= (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((((l_119 ^= (2L | (0x7A575A08L <= g_123))) != g_48) < l_187.f0), g_168[2][1])), l_185)) , g_116) != l_165))) ^ g_146);
            l_196 |= ((p_11.f0 < p_12.f0) != (((p_12.f0 ^ ((((l_195 = (0xF287346CL < 0x9920B58EL)) >= g_122) == 0x776AL) >= g_168[2][1])) , l_187.f1) == g_41));
            for (l_187.f0 = 0; (l_187.f0 <= 2); l_187.f0 += 1)
            { 
                int64_t l_211 = 0x6593A71EFC389E0ALL;
                int32_t l_217 = 0x5C00C78AL;
                g_214 |= ((l_195 = ((((safe_add_func_uint16_t_u_u(l_187.f0, (((((((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((((l_196 ^ ((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_211 | g_98), p_12.f0)), 9)) , l_195), 0xF3EEACEA086712C9LL)) || 0UL) , 65535UL) ^ 0x69F5L)) || 0xFEEFL) > l_212) <= l_107) < (-6L)), 4)), g_146)), 1L)) || g_168[2][1]) > p_11.f0) > g_168[2][1]) != 0x7A455DDAB54D3951LL) ^ 3L) && 0x0141F537L))) >= l_119) < g_48) || 0x3CFAA447L)) >= l_213);
                l_217 = (safe_lshift_func_uint16_t_u_s(65532UL, 12));
            }
        }
    }
    return p_12.f0;
}



static union U1  func_13(union U1  p_14, int8_t  p_15, uint64_t  p_16)
{ 
    uint32_t l_97 = 18446744073709551610UL;
    for (g_41 = 10; (g_41 == 12); ++g_41)
    { 
        uint16_t l_86 = 0UL;
        g_48 = l_86;
        for (p_16 = 0; (p_16 == 13); p_16++)
        { 
            uint8_t l_89[4] = {0xBCL,0xBCL,0xBCL,0xBCL};
            int32_t l_90 = 0x617FA172L;
            int i;
            for (g_48 = 0; (g_48 <= 3); g_48 += 1)
            { 
                int i;
                l_90 = l_89[g_48];
            }
        }
    }
    g_98 |= (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((((p_14.f0 == ((safe_lshift_func_int8_t_s_s(g_48, 0)) | (g_83 = g_41))) || l_97) , p_15), 7)) & p_16), 4));
    g_48 = (safe_rshift_func_int16_t_s_s(p_14.f0, 3));
    return p_14;
}



static uint32_t  func_18(uint16_t  p_19, int16_t  p_20, int8_t  p_21, uint32_t  p_22, int8_t  p_23)
{ 
    uint32_t l_39[5];
    union U1 l_45[2][3][2] = {{{{-4L},{8L}},{{-4L},{-4L}},{{8L},{-4L}}},{{{-4L},{8L}},{{-4L},{-4L}},{{8L},{-4L}}}};
    uint32_t l_68[2][2];
    int32_t l_69 = 0x41F9F804L;
    int32_t l_70[4] = {1L,1L,1L,1L};
    int32_t l_71 = 6L;
    uint32_t l_72 = 18446744073709551606UL;
    int16_t l_75 = (-1L);
    uint16_t l_78 = 0xA48AL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_39[i] = 0x0D4A7C76L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_68[i][j] = 0x881DD571L;
    }
    for (p_22 = 0; (p_22 >= 35); p_22 = safe_add_func_int16_t_s_s(p_22, 2))
    { 
        for (p_20 = 0; (p_20 >= (-12)); --p_20)
        { 
            for (p_19 = 0; (p_19 <= 4); p_19 += 1)
            { 
                int i;
                g_41 = (~18446744073709551612UL);
                if (l_39[p_19])
                    break;
                g_48 = (safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(((((l_45[1][1][0] , (safe_lshift_func_uint16_t_u_s(65534UL, 10))) == (l_45[0][0][1] , (g_41 = l_39[p_19]))) <= 0L) , l_39[p_19]))), g_17.f0));
            }
        }
        return l_39[3];
    }
    l_72 = (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((4UL && (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(0xB293L, (safe_rshift_func_uint16_t_u_u(((l_71 |= ((l_39[3] | ((l_70[1] = (safe_div_func_uint64_t_u_u(((safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s((l_69 &= (((((((safe_sub_func_int8_t_s_s((((l_39[1] , l_39[4]) , l_45[1][1][0].f0) && l_68[1][1]), 252UL)) & l_45[1][1][0].f0) && l_39[2]) && p_21) ^ g_17.f0) || 0xCAL) , g_48)), l_39[4])))) , 0x2AD41D66485393F1LL), p_22))) | 9L)) >= g_41)) & 0x0A9DAEE1L), p_20)))), p_21))), g_48)), 0x74L)), 13));
    l_71 = (l_75 && ((l_45[1][1][0] , ((((safe_add_func_uint64_t_u_u(((l_69 ^= (g_83 = (((l_78 != ((((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((l_70[1] |= (((l_72 | 0x941AL) || p_22) && l_39[0])) || 0x0AL), g_41)), g_41)) && g_48) , l_70[1]) == (-2L))) >= p_22) < 0x17L))) <= (-1L)), 8UL)) & p_20) == 0x5ED5L) || g_83)) <= l_78));
    return p_22;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_168[i][j], "g_168[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
