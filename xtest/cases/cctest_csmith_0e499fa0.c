// SPDX-License-Identifier: MIT
// cctest_csmith_0e499fa0.c --- cctest case csmith_0e499fa0 (csmith seed 239706016)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2e7c2a85 */
/* @exp_ticks 0xf09 */

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

// Options:   -s 239706016 -o /home/agent1/fast_data/tmp/csmith_gen_55wo7hj3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   int16_t  f2;
   uint8_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

struct S1 {
   const int16_t  f0;
   uint8_t  f1;
   int16_t  f2;
   uint8_t  f3;
};

struct S2 {
   const uint32_t  f0;
   int32_t  f1;
   uint16_t  f2;
};

struct S3 {
   uint64_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   int8_t  f3;
   struct S0  f4;
   uint32_t  f5;
};

struct S4 {
   struct S2  f0;
   int64_t  f1;
   const struct S3  f2;
   int8_t  f3;
   int32_t  f4;
   int32_t  f5;
};

union U6 {
   uint64_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

union U9 {
   int16_t  f0;
   const int32_t  f1;
   struct S3  f2;
   struct S2  f3;
};

union U10 {
   int8_t  f0;
};


static int32_t g_2 = 0x611BC383L;
static struct S0 g_21[5] = {{0x8A4122E7DFE98D7ELL,0x42FAFECEL,0x2CFBL,3UL,0UL},{0x8A4122E7DFE98D7ELL,0x42FAFECEL,0x2CFBL,3UL,0UL},{0x8A4122E7DFE98D7ELL,0x42FAFECEL,0x2CFBL,3UL,0UL},{0x8A4122E7DFE98D7ELL,0x42FAFECEL,0x2CFBL,3UL,0UL},{0x8A4122E7DFE98D7ELL,0x42FAFECEL,0x2CFBL,3UL,0UL}};
static int64_t g_26[2] = {0x1CF56E035D6DF81FLL,0x1CF56E035D6DF81FLL};
static uint64_t g_40 = 0x0774A768641A018BLL;
static union U10 g_43 = {-1L};
static union U9 g_44 = {-8L};
static struct S4 g_45 = {{18446744073709551606UL,0x33A12938L,1UL},0L,{0xD349FFB2EF76CAF4LL,18446744073709551607UL,0x42E063A2L,7L,{0x079270D6E0D24876LL,0x30DEE2C5L,-9L,0x12L,0x2808108BL},4294967294UL},0x9CL,0xB51834A9L,1L};
static struct S0 g_55 = {1L,0x4EB4CA12L,1L,1UL,0UL};
static uint32_t g_97 = 0x65EB6223L;
static int8_t g_110[2] = {(-4L),(-4L)};
static uint16_t g_111 = 65535UL;
static union U6 g_114[4][5] = {{{0x993B904D00042A17LL},{0x993B904D00042A17LL},{0xA7EECA001A1B5212LL},{1UL},{0xA7EECA001A1B5212LL}},{{0xE1A7EA209B0CDC42LL},{0xE1A7EA209B0CDC42LL},{0x1FC7E891FE2E2A71LL},{18446744073709551614UL},{0x1FC7E891FE2E2A71LL}},{{0x993B904D00042A17LL},{0x993B904D00042A17LL},{0xA7EECA001A1B5212LL},{1UL},{0xA7EECA001A1B5212LL}},{{0xE1A7EA209B0CDC42LL},{0xE1A7EA209B0CDC42LL},{0x1FC7E891FE2E2A71LL},{18446744073709551614UL},{0x1FC7E891FE2E2A71LL}}};



static union U6  func_1(void);
static uint64_t  func_7(union U9  p_8, struct S4  p_9, uint16_t  p_10, union U6  p_11);
static union U10  func_12(struct S2  p_13, uint32_t  p_14, uint64_t  p_15, union U9  p_16);
static struct S2  func_17(struct S1  p_18);




static union U6  func_1(void)
{ 
    int32_t l_25 = 0x22E3BD65L;
    int32_t l_104 = 4L;
    int32_t l_105 = 0L;
    int32_t l_106 = 0xABECF346L;
    int32_t l_107 = 0xF60D6E8AL;
    int32_t l_108 = 0xCAE1E1C9L;
    int32_t l_109 = 1L;
    for (g_2 = 16; (g_2 == 29); g_2 = safe_add_func_uint64_t_u_u(g_2, 3))
    { 
        struct S1 l_19 = {-6L,255UL,0L,0x26L};
        union U9 l_27 = {0x6A43L};
        union U6 l_46[4][4] = {{{0x78A3DA4F77C9A86FLL},{0x462BD54EFE8F334ELL},{0x462BD54EFE8F334ELL},{0x78A3DA4F77C9A86FLL}},{{0x462BD54EFE8F334ELL},{0x78A3DA4F77C9A86FLL},{0x462BD54EFE8F334ELL},{0x462BD54EFE8F334ELL}},{{0x78A3DA4F77C9A86FLL},{0x78A3DA4F77C9A86FLL},{3UL},{0x78A3DA4F77C9A86FLL}},{{0x78A3DA4F77C9A86FLL},{0x462BD54EFE8F334ELL},{0x462BD54EFE8F334ELL},{0x78A3DA4F77C9A86FLL}}};
        int i, j;
        g_45.f4 = ((safe_sub_func_uint64_t_u_u(func_7((func_12(func_17(l_19), (((0x37FF9BDEFAB77C19LL < ((g_26[1] = (((safe_rshift_func_int16_t_s_u(l_25, g_2)) <= 0xDBD1BD9FL) || g_2)) || g_26[1])) , 0x63L) | 0xB7L), g_2, l_27) , g_44), g_45, l_19.f0, l_46[2][2]), g_45.f2.f3)) == 5L);
    }
    l_25 = (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(l_104, g_21[2].f4)), 9));
    --g_111;
    return g_114[3][1];
}



static uint64_t  func_7(union U9  p_8, struct S4  p_9, uint16_t  p_10, union U6  p_11)
{ 
    uint32_t l_48 = 0xE0766B1CL;
    struct S3 l_76 = {18446744073709551615UL,0UL,0x3844EF14L,0x5BL,{0xE32CE8EB2946C84ELL,0xFF389711L,0xE929L,0xBCL,0xDDD0EBFAL},4294967295UL};
    int64_t l_94 = 0x27581F2D68B998A8LL;
    int32_t l_95 = 0x0E296350L;
    for (g_40 = 0; (g_40 <= 1); g_40 += 1)
    { 
        int8_t l_47[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
        int32_t l_51 = (-1L);
        int i;
        l_48--;
        for (g_44.f2.f4.f1 = 0; (g_44.f2.f4.f1 <= 1); g_44.f2.f4.f1 += 1)
        { 
            uint32_t l_52 = 0UL;
            for (p_9.f4 = 0; (p_9.f4 <= 1); p_9.f4 += 1)
            { 
                l_52--;
                if (g_45.f0.f2)
                    break;
            }
            p_8.f2.f4 = g_45.f2.f4;
            g_55 = (g_21[2] = g_45.f2.f4);
        }
        for (p_9.f4 = 1; (p_9.f4 >= 0); p_9.f4 -= 1)
        { 
            int32_t l_60[3];
            int i;
            for (i = 0; i < 3; i++)
                l_60[i] = (-8L);
            p_9.f0.f1 &= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_60[1], 5)), 7));
            p_8.f3.f1 = (l_48 , (l_60[1] != (l_48 == (safe_lshift_func_uint16_t_u_s((0x9EBDDF9043A1FAE6LL < g_45.f0.f2), g_45.f2.f4.f2)))));
        }
        for (g_44.f2.f4.f3 = 0; (g_44.f2.f4.f3 <= 1); g_44.f2.f4.f3 += 1)
        { 
            int32_t l_85 = 2L;
            if ((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(0x36L, (1L | g_26[1]))), 0)) || (safe_mod_func_uint64_t_u_u((0x14779B98L == g_45.f2.f4.f3), 0xEB91FBA64A4A936FLL))) < l_48), 8)))
            { 
                int32_t l_75 = 0x62F6D3EBL;
                p_9.f4 = ((safe_div_func_int16_t_s_s((((p_9.f2.f4.f4 && ((safe_rshift_func_int16_t_s_s(p_10, (l_75 |= g_55.f3))) || l_47[4])) <= g_45.f1) ^ p_9.f2.f0), 0xB466L)) < g_45.f2.f0);
                l_76 = p_9.f2;
                l_85 = ((safe_sub_func_int8_t_s_s(g_45.f1, (safe_add_func_uint16_t_u_u(g_45.f2.f0, (safe_sub_func_uint32_t_u_u((g_21[2].f4 ^ (((safe_rshift_func_int16_t_s_u(g_45.f0.f2, l_76.f4.f4)) >= l_47[4]) && 1UL)), 0UL)))))) && 0x71A791DEL);
            }
            else
            { 
                uint32_t l_96 = 0x01D58953L;
                l_95 &= ((safe_div_func_int32_t_s_s(g_2, ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((p_9.f2.f4.f3 < g_45.f2.f4.f0), (((0xDA1DL ^ g_45.f2.f4.f2) && 0UL) && 18446744073709551615UL))), p_9.f4)), l_94)) && g_26[1]))) && l_76.f4.f2);
                l_96 = 0xC87ACCF6L;
                p_9.f0.f1 = 1L;
            }
            p_8.f2.f4 = g_55;
            g_97++;
        }
    }
    return p_9.f0.f1;
}



static union U10  func_12(struct S2  p_13, uint32_t  p_14, uint64_t  p_15, union U9  p_16)
{ 
    int16_t l_28[3][4] = {{0xAA84L,0xA35CL,0xA35CL,0xAA84L},{0xA35CL,0xAA84L,0xA35CL,0xA35CL},{0xAA84L,0xAA84L,0L,0xAA84L}};
    int i, j;
    p_13.f1 = l_28[1][3];
    for (p_16.f0 = (-10); (p_16.f0 < (-13)); p_16.f0 = safe_sub_func_uint64_t_u_u(p_16.f0, 1))
    { 
        int64_t l_37 = 0x3308626224F168E5LL;
        int32_t l_38[2][2][3] = {{{0x0F3E77DFL,0x0F3E77DFL,0x0F3E77DFL},{0x0CFCE320L,0x0CFCE320L,0x0CFCE320L}},{{0x0F3E77DFL,0x0F3E77DFL,0x0F3E77DFL},{0x0CFCE320L,0x0CFCE320L,0x0CFCE320L}}};
        struct S0 l_39 = {0L,0x4A51E29AL,4L,255UL,4294967295UL};
        int i, j, k;
        l_38[0][0][0] ^= ((l_28[1][3] & (p_13.f2 <= ((g_21[2].f1 ^ (safe_rshift_func_uint8_t_u_s(((p_15 >= l_37) && p_15), 2))) <= g_21[2].f2))) || 1L);
        g_21[2] = l_39;
        ++g_40;
    }
    return g_43;
}



static struct S2  func_17(struct S1  p_18)
{ 
    struct S0 l_20 = {0L,0x0A3B7DC4L,0x54C5L,0x6BL,4294967295UL};
    struct S2 l_22 = {0x1779538EL,0xEFB48CA1L,0UL};
    g_21[2] = l_20;
    return l_22;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_21[i].f0, "g_21[i].f0", print_hash_value);
        transparent_crc(g_21[i].f1, "g_21[i].f1", print_hash_value);
        transparent_crc(g_21[i].f2, "g_21[i].f2", print_hash_value);
        transparent_crc(g_21[i].f3, "g_21[i].f3", print_hash_value);
        transparent_crc(g_21[i].f4, "g_21[i].f4", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);

    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_45.f0.f0, "g_45.f0.f0", print_hash_value);
    transparent_crc(g_45.f0.f1, "g_45.f0.f1", print_hash_value);
    transparent_crc(g_45.f0.f2, "g_45.f0.f2", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2.f0, "g_45.f2.f0", print_hash_value);
    transparent_crc(g_45.f2.f1, "g_45.f2.f1", print_hash_value);
    transparent_crc(g_45.f2.f2, "g_45.f2.f2", print_hash_value);
    transparent_crc(g_45.f2.f3, "g_45.f2.f3", print_hash_value);
    transparent_crc(g_45.f2.f4.f0, "g_45.f2.f4.f0", print_hash_value);
    transparent_crc(g_45.f2.f4.f1, "g_45.f2.f4.f1", print_hash_value);
    transparent_crc(g_45.f2.f4.f2, "g_45.f2.f4.f2", print_hash_value);
    transparent_crc(g_45.f2.f4.f3, "g_45.f2.f4.f3", print_hash_value);
    transparent_crc(g_45.f2.f4.f4, "g_45.f2.f4.f4", print_hash_value);
    transparent_crc(g_45.f2.f5, "g_45.f2.f5", print_hash_value);
    transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
    transparent_crc(g_45.f4, "g_45.f4", print_hash_value);
    transparent_crc(g_45.f5, "g_45.f5", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    transparent_crc(g_55.f3, "g_55.f3", print_hash_value);
    transparent_crc(g_55.f4, "g_55.f4", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);

    }
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_114[i][j].f0, "g_114[i][j].f0", print_hash_value);
            transparent_crc(g_114[i][j].f1, "g_114[i][j].f1", print_hash_value);
            transparent_crc(g_114[i][j].f2, "g_114[i][j].f2", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
