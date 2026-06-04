// SPDX-License-Identifier: MIT
// cctest_csmith_3538d62c.c --- cctest case csmith_3538d62c (csmith seed 892917292)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x24a1d935 */
/* @exp_ticks 0x18bd */

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

// Options:   -s 892917292 -o /home/agent1/fast_data/tmp/csmith_gen_n6s74h7h/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   int64_t  f1;
   uint8_t  f2;
   uint8_t  f3;
   const uint64_t  f4;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
};

union U2 {
   int32_t  f0;
};


static int32_t g_2 = 1L;
static uint32_t g_5 = 0xCABFC393L;
static uint16_t g_25[2] = {65535UL,65535UL};
static int64_t g_35 = 8L;
static int64_t g_41[4][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
static uint8_t g_42[3] = {252UL,252UL,252UL};
static uint16_t g_46 = 0x6174L;
static uint8_t g_60[5] = {0x0AL,0x0AL,0x0AL,0x0AL,0x0AL};
static uint64_t g_72 = 18446744073709551615UL;
static uint64_t g_80 = 9UL;
static uint32_t g_110 = 18446744073709551615UL;
static uint32_t g_111[5][5] = {{4294967289UL,7UL,4294967289UL,4294967289UL,7UL},{0xF585002FL,1UL,1UL,0xF585002FL,1UL},{7UL,7UL,4294967295UL,7UL,7UL},{1UL,0xF585002FL,1UL,1UL,0xF585002FL},{7UL,4294967289UL,4294967289UL,7UL,4294967289UL}};
static struct S0 g_115[3][5] = {{{0xACL,7L,255UL,1UL,0x478769263B3E4958LL},{0xACL,7L,255UL,1UL,0x478769263B3E4958LL},{-1L,0xF9D813A62BBE412CLL,0x75L,0x36L,18446744073709551608UL},{0xB1L,0xA685BE0904B385D3LL,0x86L,0x00L,0UL},{0xB1L,0xA685BE0904B385D3LL,0x86L,0x00L,0UL}},{{0L,0x69C7970BCD743813LL,1UL,0x05L,0x2332C83D21EB9114LL},{-6L,0xF175425EB3672896LL,0x24L,252UL,0x31C418A464987A42LL},{0L,0x69C7970BCD743813LL,1UL,0x05L,0x2332C83D21EB9114LL},{0L,0x69C7970BCD743813LL,1UL,0x05L,0x2332C83D21EB9114LL},{-6L,0xF175425EB3672896LL,0x24L,252UL,0x31C418A464987A42LL}},{{0xB1L,0xA685BE0904B385D3LL,0x86L,0x00L,0UL},{-1L,0xF9D813A62BBE412CLL,0x75L,0x36L,18446744073709551608UL},{-1L,0xF9D813A62BBE412CLL,0x75L,0x36L,18446744073709551608UL},{0xB1L,0xA685BE0904B385D3LL,0x86L,0x00L,0UL},{-1L,0xF9D813A62BBE412CLL,0x75L,0x36L,18446744073709551608UL}}};
static int8_t g_118 = (-10L);
static uint32_t g_133 = 5UL;



static struct S0  func_1(void);
static int64_t  func_7(int32_t  p_8);
static int16_t  func_15(const uint8_t  p_16, int64_t  p_17);
static int64_t  func_18(uint64_t  p_19, const uint64_t  p_20, uint8_t  p_21);




static struct S0  func_1(void)
{ 
    uint32_t l_6[1];
    int8_t l_96 = 0x62L;
    int64_t l_114 = 2L;
    int64_t l_131 = 7L;
    struct S0 l_160 = {-3L,1L,0x19L,0xDDL,0UL};
    int i;
    for (i = 0; i < 1; i++)
        l_6[i] = 1UL;
lbl_155:
    for (g_2 = 0; (g_2 == (-15)); --g_2)
    { 
        uint32_t l_92[5][3][5] = {{{0x7A6105BDL,0x7A6105BDL,18446744073709551609UL,18446744073709551609UL,0x7A6105BDL},{0xB7196FBAL,0x2DC12F67L,0xB7196FBAL,0x2DC12F67L,0xB7196FBAL},{0x7A6105BDL,18446744073709551609UL,18446744073709551609UL,0x7A6105BDL,0x7A6105BDL}},{{1UL,0x2DC12F67L,1UL,0x2DC12F67L,1UL},{0x7A6105BDL,0x7A6105BDL,18446744073709551609UL,18446744073709551609UL,0x7A6105BDL},{0xB7196FBAL,0x2DC12F67L,0xB7196FBAL,0x2DC12F67L,0xB7196FBAL}},{{0x7A6105BDL,18446744073709551609UL,18446744073709551609UL,0x7A6105BDL,0x7A6105BDL},{1UL,0x2DC12F67L,1UL,0x2DC12F67L,1UL},{0x7A6105BDL,0x7A6105BDL,18446744073709551609UL,18446744073709551609UL,0x7A6105BDL}},{{0xB7196FBAL,0x2DC12F67L,0xB7196FBAL,0x2DC12F67L,0xB7196FBAL},{0x7A6105BDL,18446744073709551609UL,18446744073709551609UL,0x7A6105BDL,0x7A6105BDL},{1UL,0x2DC12F67L,1UL,0x2DC12F67L,1UL}},{{0x7A6105BDL,0x7A6105BDL,18446744073709551609UL,18446744073709551609UL,0x7A6105BDL},{0xB7196FBAL,0x2DC12F67L,0xB7196FBAL,0x2DC12F67L,0xB7196FBAL},{0x7A6105BDL,18446744073709551609UL,18446744073709551609UL,0x7A6105BDL,0x7A6105BDL}}};
        int32_t l_97 = (-9L);
        int i, j, k;
        g_5 = g_2;
        for (g_5 = 0; (g_5 <= 0); g_5 += 1)
        { 
            union U2 l_81 = {0x323B5E53L};
            uint32_t l_91 = 0UL;
            int32_t l_119 = 0L;
            if ((((-1L) & func_7(l_6[0])) | (l_81 , 4294967295UL)))
            { 
                int32_t l_93 = 0xA27851EDL;
                union U1 l_100[2][1][4] = {{{{0UL},{4294967287UL},{0UL},{4294967287UL}}},{{{0UL},{4294967287UL},{0UL},{4294967287UL}}}};
                int i, j, k;
                l_93 = (((safe_lshift_func_int16_t_s_s(g_25[1], ((g_60[3] , (safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((g_41[2][0] = ((+(l_91 = (safe_add_func_uint8_t_u_u(247UL, l_6[0])))) && 1UL)), g_35)), l_6[0]))) & l_92[4][0][3]))) == l_92[2][0][3]) >= 255UL);
                if (g_5)
                    break;
                l_97 |= ((safe_rshift_func_uint16_t_u_u((g_25[1]++), 10)) > (l_100[1][0][2] , (0x7EL >= ((((g_41[0][0] ^= 9L) ^ l_81.f0) <= g_35) && (-1L)))));
            }
            else
            { 
                int32_t l_107[5] = {0x4B0677A0L,0x4B0677A0L,0x4B0677A0L,0x4B0677A0L,0x4B0677A0L};
                uint64_t l_116 = 18446744073709551615UL;
                int64_t l_117 = (-1L);
                int i;
                g_111[0][2] = (g_110 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(l_107[4], (safe_div_func_uint32_t_u_u(g_42[0], 0xDE0C3857L)))), 0xE8202A807506916ALL)), g_35)));
                l_97 = (safe_mul_func_int8_t_s_s((((((((g_41[2][0] || l_91) , (l_114 >= ((g_115[0][0] , g_72) ^ l_116))) <= g_115[0][0].f1) , 0xEEL) < l_92[3][1][0]) == g_110) != l_117), l_117));
                if (l_114)
                    break;
            }
            g_118 = g_5;
            l_119 = g_42[0];
        }
    }
    for (g_118 = 1; (g_118 >= 0); g_118 -= 1)
    { 
        uint32_t l_132 = 0x1BE40E7BL;
        for (g_46 = 0; (g_46 <= 1); g_46 += 1)
        { 
            union U2 l_158 = {0x666566E7L};
            int i;
            if ((((safe_mod_func_uint32_t_u_u(g_25[g_46], (safe_mul_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((((0x36B73638L >= (l_6[0] >= (safe_sub_func_int8_t_s_s((+((safe_mul_func_uint8_t_u_u((l_131 != 3L), g_25[g_46])) == 65535UL)), g_2)))) >= l_132) , g_41[2][0]), 0L)) || g_60[0]) , g_110) & g_110), 0xD4C0L)))) >= 0x2CE3EA4BL) < g_25[0]))
            { 
                int16_t l_152[1];
                int64_t l_153[2][1][4] = {{{0xB6E628875917A22FLL,0xB6E628875917A22FLL,0xB6E628875917A22FLL,0xB6E628875917A22FLL}},{{0xB6E628875917A22FLL,0xB6E628875917A22FLL,0xB6E628875917A22FLL,0xB6E628875917A22FLL}}};
                int32_t l_154 = 0x7346C39FL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_152[i] = 0x0400L;
                g_133--;
                l_154 ^= (safe_add_func_int16_t_s_s((4L < (safe_mul_func_uint16_t_u_u(0x7730L, (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(((safe_add_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_s((l_152[0] = 0xADL), (l_132 < 0x44B9F4E2AC27A575LL))) != 6L) ^ 0xFC78DC00671E2B22LL), l_114)) && g_111[0][2]), 0x709C269514ADC3B9LL)), l_153[1][0][2])) < 0x3BL), 0x187FL)) > l_131), l_132))))), g_5));
            }
            else
            { 
                if (g_133)
                    goto lbl_155;
            }
            for (l_114 = 1; (l_114 >= 0); l_114 -= 1)
            { 
                union U2 l_159 = {0xABE64536L};
                int i;
                l_159.f0 = ((g_25[l_114] = ((safe_mod_func_uint64_t_u_u(((l_158 , l_132) ^ (g_42[1] ^ (l_159 , g_41[2][1]))), g_60[0])) , l_96)) , g_46);
            }
        }
    }
    return l_160;
}



static int64_t  func_7(int32_t  p_8)
{ 
    uint64_t l_29 = 1UL;
    int32_t l_30 = 0L;
    int32_t l_55 = 1L;
    int8_t l_79 = 0xBCL;
    if (p_8)
    { 
        uint32_t l_31 = 1UL;
        int32_t l_32 = 0x538E0EA6L;
        uint32_t l_34 = 0xC102D1F7L;
        for (p_8 = 0; (p_8 >= 24); p_8 = safe_add_func_int16_t_s_s(p_8, 4))
        { 
            struct S0 l_38[5] = {{2L,0x0B0DEBF624E194E4LL,1UL,0x44L,18446744073709551607UL},{2L,0x0B0DEBF624E194E4LL,1UL,0x44L,18446744073709551607UL},{2L,0x0B0DEBF624E194E4LL,1UL,0x44L,18446744073709551607UL},{2L,0x0B0DEBF624E194E4LL,1UL,0x44L,18446744073709551607UL},{2L,0x0B0DEBF624E194E4LL,1UL,0x44L,18446744073709551607UL}};
            int i;
            l_31 &= (((safe_rshift_func_int16_t_s_s(((((l_30 ^= ((safe_lshift_func_int16_t_s_u(((l_29 ^= func_15(g_2, func_18((!0UL), g_5, ((safe_lshift_func_uint16_t_u_s(1UL, 14)) & 0x223DEC995F7626A9LL)))) == 0xF0D4L), 7)) , g_5)) & (-1L)) , p_8) , 0xEB47L), 3)) <= p_8) & 0xB13B1067DCC3592ELL);
            if (g_25[1])
            { 
                int32_t l_33 = 9L;
                l_34 = (g_25[1] >= (((l_32 = (p_8 == 0UL)) <= ((((l_33 >= 0x6E972F33L) == 1UL) && 0x6027L) != p_8)) || l_31));
                g_35 = p_8;
                l_32 = (((((safe_div_func_int64_t_s_s((l_30 |= (l_38[4] , ((p_8 , ((safe_mod_func_int16_t_s_s(((((g_42[0]++) >= (safe_unary_minus_func_uint8_t_u(1UL))) ^ (g_25[1] > p_8)) && g_41[0][1]), 5L)) & l_38[4].f0)) == g_41[2][1]))), p_8)) >= 0L) , g_2) != 1UL) || g_5);
            }
            else
            { 
                const uint16_t l_54 = 65533UL;
                if (g_46)
                    break;
                l_55 ^= ((safe_add_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int64_t_s((safe_sub_func_uint16_t_u_u((0x84767EE7A741179DLL || (l_30 , g_41[2][1])), ((-1L) | g_5))))) <= p_8), (-1L))) && 4294967295UL), 0x166C0C0825FC6431LL)) & l_54);
            }
        }
    }
    else
    { 
        int32_t l_67 = 1L;
        int32_t l_68 = 0x529C6F6BL;
        int64_t l_69 = 0L;
        int32_t l_70 = 0xFD598C55L;
        int32_t l_71[5] = {0x87233ED7L,0x87233ED7L,0x87233ED7L,0x87233ED7L,0x87233ED7L};
        int i;
        for (g_35 = 0; (g_35 > (-21)); g_35--)
        { 
            int32_t l_66 = 1L;
            l_66 = (((--g_60[0]) | (!((0x0CL & (safe_add_func_int8_t_s_s(((0x7083D4BAF72093AALL < p_8) , p_8), 0L))) , p_8))) , p_8);
        }
        g_72++;
    }
    l_30 = (((((0x6920L && ((safe_div_func_uint16_t_u_u(((l_55 |= (g_25[1] = (g_46 = g_35))) <= (safe_add_func_uint64_t_u_u((((p_8 >= l_79) , l_79) >= (-8L)), 0xF3D54CDCAC19DAACLL))), 65534UL)) ^ 0xB1L)) , p_8) || 4294967287UL) > g_80) != 0x2590C119CD2C718CLL);
    return p_8;
}



static int16_t  func_15(const uint8_t  p_16, int64_t  p_17)
{ 
    int32_t l_28 = 0x1F199E1FL;
    l_28 = p_16;
    return g_5;
}



static int64_t  func_18(uint64_t  p_19, const uint64_t  p_20, uint8_t  p_21)
{ 
    const int8_t l_26[4][5][2] = {{{(-1L),0x4BL},{0xCBL,1L},{(-1L),6L},{6L,0x31L},{0x93L,0x31L}},{{6L,6L},{(-1L),1L},{0xCBL,0x4BL},{(-1L),0x48L},{0x31L,(-1L)}},{{1L,6L},{1L,(-1L)},{0x31L,0x48L},{(-1L),0x4BL},{0xCBL,1L}},{{(-1L),6L},{6L,0x31L},{0x93L,0x31L},{6L,6L},{(-1L),1L}}};
    int32_t l_27[2][2][3] = {{{3L,1L,3L},{3L,1L,3L}},{{3L,1L,3L},{3L,1L,3L}}};
    int i, j, k;
    for (p_21 = 0; (p_21 <= 1); p_21 += 1)
    { 
        for (p_19 = 0; (p_19 <= 1); p_19 += 1)
        { 
            int i;
            return g_25[p_21];
        }
    }
    l_27[0][1][0] = l_26[1][0][0];
    return p_21;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_25[i], "g_25[i]", print_hash_value);

    }
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_41[i][j], "g_41[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_42[i], "g_42[i]", print_hash_value);

    }
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);

    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_111[i][j], "g_111[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_115[i][j].f0, "g_115[i][j].f0", print_hash_value);
            transparent_crc(g_115[i][j].f1, "g_115[i][j].f1", print_hash_value);
            transparent_crc(g_115[i][j].f2, "g_115[i][j].f2", print_hash_value);
            transparent_crc(g_115[i][j].f3, "g_115[i][j].f3", print_hash_value);
            transparent_crc(g_115[i][j].f4, "g_115[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
