// SPDX-License-Identifier: MIT
// cctest_csmith_8122d41d.c --- cctest case csmith_8122d41d (csmith seed 2166543389)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x779148a5 */
/* @exp_ticks 0x6eb */

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

// Options:   -s 2166543389 -o /home/agent1/fast_data/tmp/csmith_gen_if29reif/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

union U1 {
   const int64_t  f0;
   int32_t  f1;
   uint32_t  f2;
};


static int16_t g_2[5][1][5] = {{{(-4L),0x279CL,0L,0L,0x279CL}},{{0x07B5L,0x0F80L,0x69ECL,0x69ECL,0x0F80L}},{{(-4L),0x279CL,0L,0L,0x279CL}},{{0x07B5L,0x0F80L,0x69ECL,0x69ECL,0x0F80L}},{{(-4L),0x279CL,0L,0L,0x279CL}}};
static uint32_t g_22 = 0x8CB667F5L;
static uint32_t g_48 = 1UL;
static union U1 g_52 = {0x1AB7A3EBEF27779ELL};
static uint32_t g_72 = 3UL;
static uint16_t g_79 = 0xE6FAL;
static int8_t g_82 = (-3L);
static uint64_t g_89 = 18446744073709551615UL;
static int16_t g_90 = 0xD0B9L;
static int64_t g_96 = 0x606EF8CBCAB5D99DLL;
static uint64_t g_97 = 0x71D57AD53B930988LL;
static struct S0 g_134 = {-3L,0x28269CF3L};
static uint32_t g_135 = 0x9CE8E1B6L;



static uint64_t  func_1(void);
static int8_t  func_3(int16_t  p_4, const int32_t  p_5, int8_t  p_6, uint64_t  p_7);
static int16_t  func_10(int32_t  p_11);
static union U1  func_14(union U1  p_15, uint32_t  p_16, int32_t  p_17, uint64_t  p_18);




static uint64_t  func_1(void)
{ 
    int8_t l_71 = 0xC8L;
    int32_t l_78 = 0x7AB62727L;
    int32_t l_113[4] = {0xA86AC4A7L,0xA86AC4A7L,0xA86AC4A7L,0xA86AC4A7L};
    int32_t l_114 = (-6L);
    union U1 l_126 = {0x5BE42EE2B1DE1D06LL};
    int64_t l_154 = 7L;
    int i;
lbl_117:
    g_79 ^= (l_78 = (((g_2[2][0][4] , (func_3((safe_lshift_func_int16_t_s_u((g_2[0][0][3] , func_10(g_2[2][0][4])), 15)), g_2[2][0][1], l_71, g_2[0][0][4]) | g_2[0][0][1])) != l_71) , (-1L)));
    if ((0x825732E7L <= (safe_sub_func_int8_t_s_s((g_90 ^= ((g_82 = 0x0296C032BE65A1B2LL) != (safe_lshift_func_int8_t_s_u((g_89 = (safe_mod_func_int16_t_s_s(((l_78 = (safe_div_func_int16_t_s_s(0x70AFL, (-10L)))) >= (-9L)), l_71))), g_48)))), 0x15L))))
    { 
        int32_t l_98 = 0xF1FED341L;
        int32_t l_99 = 0x93D2D6DAL;
        int32_t l_116 = 0xB60CE226L;
        l_99 = ((g_52 , ((safe_div_func_int64_t_s_s(((((g_48 || (safe_mul_func_uint8_t_u_u((!(g_96 = g_52.f1)), g_72))) , g_48) , g_97) > (-4L)), g_2[2][0][4])) <= 0xC9CDL)) <= l_98);
        for (g_48 = 8; (g_48 >= 29); ++g_48)
        { 
            int64_t l_115 = (-6L);
            l_116 &= (((safe_div_func_uint16_t_u_u((l_99 || ((((safe_mul_func_int8_t_s_s(g_52.f2, l_78)) | (((((safe_mod_func_int32_t_s_s(((~((((l_114 |= (((l_99 = (safe_sub_func_int8_t_s_s(((l_113[0] |= (!(!g_52.f2))) , l_98), 0L))) & l_98) , 0xB375AFA80DD4D5FFLL)) || g_52.f2) , l_113[0]) == 0xC3E15B55L)) >= l_78), l_115)) || l_98) == l_71) >= 0xFAD40830044FF48DLL) >= l_71)) || (-7L)) < g_79)), 0x1DE5L)) && g_52.f2) >= 0x863DL);
            if (l_99)
                goto lbl_117;
        }
    }
    else
    { 
        int16_t l_127 = 0xB64DL;
        struct S0 l_133 = {0x814F6C7FL,0L};
        if ((g_52.f1 ^= (((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((((g_2[0][0][1] != (safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((((g_90 <= g_22) , l_126) , 8L), g_96)) & l_127) , 0xBE20L), l_126.f2))) & l_127) && g_2[2][0][4]) ^ 1L) ^ l_127) < l_127), g_89)), 65535UL)) >= 0xA080896F4A54BB3BLL) > 0x571AEE78B5E36A62LL)))
        { 
            int64_t l_130 = (-1L);
            int32_t l_131 = 0xB9EE848CL;
            int32_t l_132[2][5][3] = {{{1L,0x71A0F86EL,0x71A0F86EL},{0x849AB603L,9L,9L},{1L,0x71A0F86EL,0x71A0F86EL},{0x849AB603L,9L,9L},{1L,0x71A0F86EL,0x71A0F86EL}},{{0x849AB603L,9L,(-6L)},{0x71A0F86EL,0x25D3E5ECL,0x25D3E5ECL},{9L,(-6L),(-6L)},{0x71A0F86EL,0x25D3E5ECL,0x25D3E5ECL},{9L,(-6L),(-6L)}}};
            int i, j, k;
            if (((((l_132[1][4][0] &= (((safe_sub_func_int32_t_s_s((0x8D47L ^ (g_90 <= (g_89 = (l_130 != (l_131 = g_96))))), g_82)) == l_130) != 1UL)) || g_48) > 0L) && g_97))
            { 
                g_134 = l_133;
                g_135--;
            }
            else
            { 
                int32_t l_153 = 0x7480A48EL;
                l_114 = ((((l_113[0] = (-6L)) >= (((((((safe_mod_func_uint16_t_u_u(0x3ACBL, (+(((safe_rshift_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(0x50L, (l_153 , g_52.f1))) < 0xF6EF3277B429FF7DLL), l_132[1][4][0])), l_78)) & l_126.f0), 0xA950BD7AEA954584LL)), l_126.f1)) > g_2[3][0][3]) > 9UL) < g_2[0][0][0]) >= g_134.f1), g_135)) , l_133.f1) == 0x69F8L)))) & g_2[4][0][4]) < 18446744073709551613UL) || g_134.f1) & 18446744073709551610UL) > g_97) == g_79)) || l_154) , g_2[1][0][1]);
                l_114 = g_135;
                return g_52.f1;
            }
        }
        else
        { 
            uint16_t l_155 = 7UL;
            int32_t l_158 = 0xD9AFFEC7L;
            if (l_114)
            { 
lbl_162:
                --l_155;
            }
            else
            { 
                uint64_t l_159 = 0x8B7766AA345BFC95LL;
                l_159++;
                if (l_133.f1)
                    goto lbl_162;
            }
        }
        g_52.f1 = 0x643767A3L;
    }
    return l_113[0];
}



static int8_t  func_3(int16_t  p_4, const int32_t  p_5, int8_t  p_6, uint64_t  p_7)
{ 
    uint32_t l_75 = 0x1232C2F6L;
    ++g_72;
    --l_75;
    return l_75;
}



static int16_t  func_10(int32_t  p_11)
{ 
    union U1 l_19 = {1L};
    int32_t l_20 = 1L;
    int32_t l_21 = 0x78C9DFFBL;
    p_11 = ((safe_lshift_func_uint16_t_u_s(0xC7C6L, (func_14(l_19, (g_22 = ((-10L) < (l_21 = (l_20 &= 4294967290UL)))), p_11, p_11) , p_11))) || g_22);
    return g_52.f1;
}



static union U1  func_14(union U1  p_15, uint32_t  p_16, int32_t  p_17, uint64_t  p_18)
{ 
    uint16_t l_25 = 6UL;
    uint16_t l_36 = 0x4CE1L;
    uint32_t l_37[3];
    uint64_t l_42 = 1UL;
    struct S0 l_55 = {0L,0L};
    int32_t l_57 = 0x639B6AF4L;
    int i;
    for (i = 0; i < 3; i++)
        l_37[i] = 0x83DE37D6L;
    l_25 = (g_2[0][0][2] | (safe_sub_func_int32_t_s_s((g_2[2][0][4] < (-1L)), (g_2[3][0][3] < g_2[2][0][4]))));
    l_37[0] = (l_25 , (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(l_25, 0x69CD17CD9532955FLL)), ((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((((-1L) < l_36) || l_36) & l_25), 4)) , l_36), p_16)) >= 5L))) , g_22), p_15.f0)));
    if (((p_16 >= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(l_42, 1)), 5)) ^ (-3L))) && (l_37[2] , g_2[2][0][2])))
    { 
        uint8_t l_47 = 0x83L;
lbl_51:
        for (g_22 = (-12); (g_22 != 23); g_22 = safe_add_func_int16_t_s_s(g_22, 7))
        { 
            for (p_15.f2 = 0; (p_15.f2 > 15); p_15.f2 = safe_add_func_uint32_t_u_u(p_15.f2, 5))
            { 
                if (l_47)
                    break;
                if (p_15.f2)
                    goto lbl_51;
            }
            ++g_48;
        }
        for (l_47 = 0; l_47 < 3; l_47 += 1)
        {
            l_37[l_47] = 3UL;
        }
    }
    else
    { 
        int32_t l_56 = 0x60D90C37L;
        int64_t l_70[2];
        int i;
        for (i = 0; i < 2; i++)
            l_70[i] = 0x8557C7BD553F327ELL;
        l_57 = ((g_52 , (safe_sub_func_int64_t_s_s((((((l_55 , ((l_56 <= 0x08211ABD849EDE15LL) > l_57)) < 0x36L) > p_15.f2) , 65535UL) >= g_52.f1), 18446744073709551607UL))) <= l_56);
        g_52.f1 ^= (safe_sub_func_int64_t_s_s(((l_56 ^ (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((0x59C4L ^ (safe_lshift_func_int8_t_s_s(((l_70[1] = (safe_rshift_func_uint16_t_u_u(1UL, (safe_lshift_func_int16_t_s_s(((((p_17 , 0xD6F4693715CD22FFLL) > l_56) < p_18) >= 0x380B773BL), 3))))) | l_55.f1), 0))), l_56)), 0L))) == l_56), 0xAFE108D8C4114487LL));
    }
    return p_15;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_134.f1, "g_134.f1", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
