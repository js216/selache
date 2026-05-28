// SPDX-License-Identifier: MIT
// cctest_csmith_ce06d97d.c --- cctest case csmith_ce06d97d (csmith seed 3456555389)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3e360991 */
/* @exp_ticks 0x4429 */

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

// Options:   -s 3456555389 -o /tmp/csmith_gen_ci2hwcay/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int8_t  f1;
   uint32_t  f2;
   const uint16_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int32_t  f0;
   int64_t  f1;
   struct S0  f2;
   uint16_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint16_t  f0;
};
#pragma pack(pop)

union U3 {
   int16_t  f0;
   const uint32_t  f1;
   uint32_t  f2;
};

union U4 {
   uint32_t  f0;
   int8_t  f1;
};


static const union U4 g_8 = {18446744073709551607UL};
static struct S0 g_13 = {0x6FE6D39CL,0xC6L,0x1FDBD017L,1UL};
static uint8_t g_77[3][4][4] = {{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}}};
static int64_t g_99 = 0xF2DB053F5E9E6483LL;
static union U3 g_135 = {-1L};
static uint16_t g_139[5] = {0x4BB3L,0x4BB3L,0x4BB3L,0x4BB3L,0x4BB3L};
static int32_t g_147[2] = {0x99EAA038L,0x99EAA038L};
static uint64_t g_152[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static int8_t g_166[3] = {0L,0L,0L};
static uint32_t g_167 = 0xB48A4C82L;



static uint32_t  func_1(void);
static uint8_t  func_5(const union U4  p_6, uint8_t  p_7);
static union U3  func_11(struct S0  p_12);
static uint32_t  func_15(int16_t  p_16, uint32_t  p_17);




static uint32_t  func_1(void)
{ 
    int16_t l_137 = 0x1A5AL;
    int32_t l_138[1];
    int8_t l_142 = (-9L);
    int8_t l_176 = 1L;
    int i;
    for (i = 0; i < 1; i++)
        l_138[i] = (-3L);
    g_139[0] &= ((l_138[0] = ((safe_lshift_func_int16_t_s_s(((~func_5(g_8, (g_8.f0 , (safe_div_func_uint32_t_u_u((func_11(g_13) , 0xBD4EB138L), g_135.f0))))) , l_137), g_13.f3)) < 0x298C4F2CL)) ^ g_8.f1);
    if ((g_13.f0 = (safe_lshift_func_uint16_t_u_s(0x6A62L, g_13.f3))))
    { 
        g_13.f0 = g_13.f2;
        return l_142;
    }
    else
    { 
        for (g_135.f2 = 0; (g_135.f2 == 48); g_135.f2 = safe_add_func_int64_t_s_s(g_135.f2, 1))
        { 
            if (g_135.f0)
                break;
            return g_135.f0;
        }
    }
    for (g_99 = 0; (g_99 <= 2); g_99 += 1)
    { 
        int64_t l_146 = 4L;
        int32_t l_165 = 1L;
        l_146 |= (!g_135.f2);
        for (g_13.f0 = 0; (g_13.f0 <= 2); g_13.f0 += 1)
        { 
            uint32_t l_148[2][4][4] = {{{0xC1B6DC2EL,0x8E3B2826L,0xC1B6DC2EL,4294967295UL},{0xF93178D7L,0x8814F6C7L,0x473E6E22L,0xF93178D7L},{4294967290UL,4294967295UL,0x3DBFA8D9L,0x8814F6C7L},{4294967295UL,0x8E3B2826L,0x3DBFA8D9L,0x3DBFA8D9L}},{{4294967290UL,4294967290UL,0x473E6E22L,4294967291UL},{0xF93178D7L,0x86E789AEL,0xC1B6DC2EL,0x8814F6C7L},{0xC1B6DC2EL,0x8814F6C7L,4294967295UL,0xC1B6DC2EL},{4294967290UL,0x8814F6C7L,0UL,0x8814F6C7L}}};
            int32_t l_151 = 2L;
            int i, j, k;
            if ((g_135.f1 != (g_135.f0 <= g_8.f1)))
            { 
                l_148[1][0][3]++;
                --g_152[1];
            }
            else
            { 
                int8_t l_159 = (-1L);
                int32_t l_164 = 0x7527B815L;
                g_166[2] |= (g_135 , (l_165 = (g_8 , (safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((l_159 = l_148[1][0][3]), (((safe_div_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((g_13.f0 < g_13.f1), 0x1B3AL)) && l_146), l_146)) || g_13.f1) ^ g_8.f0))), l_164)))));
                if (g_147[1])
                    continue;
                if (l_148[1][0][3])
                    break;
            }
            g_167--;
            for (l_165 = 0; (l_165 <= 2); l_165 += 1)
            { 
                uint16_t l_174 = 65527UL;
                int32_t l_175 = 0L;
                int i, j, k;
                l_175 &= (8L ^ (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_77[l_165][(g_99 + 1)][(g_13.f0 + 1)], (g_13.f2 < (g_77[l_165][(g_99 + 1)][(g_13.f0 + 1)] > 18446744073709551610UL)))), l_174)));
                return g_135.f0;
            }
        }
    }
    return l_176;
}



static uint8_t  func_5(const union U4  p_6, uint8_t  p_7)
{ 
    int32_t l_136 = 0xBE207B94L;
    return l_136;
}



static union U3  func_11(struct S0  p_12)
{ 
    int32_t l_14 = (-9L);
    int32_t l_18 = 0x49968CB6L;
    int32_t l_96 = 0xBC3FCB6EL;
    struct S2 l_133 = {0x0044L};
    uint32_t l_134[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_134[i][j] = 0x0901DBA8L;
    }
    l_96 &= (l_14 == func_15(l_18, (g_8.f0 , (safe_rshift_func_uint16_t_u_s(p_12.f0, p_12.f0)))));
    for (g_13.f0 = (-23); (g_13.f0 == (-12)); g_13.f0 = safe_add_func_uint8_t_u_u(g_13.f0, 9))
    { 
        g_99 = p_12.f1;
    }
    l_14 = ((safe_lshift_func_int8_t_s_s(((((((((safe_rshift_func_uint8_t_u_u((l_96 = (safe_sub_func_uint16_t_u_u((!(safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((++g_77[1][3][1]), 4)), (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(g_8.f1, (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(l_14, (l_133 , g_13.f3))) >= (-4L)), 0)), p_12.f1)) && 2UL) || l_134[1][0]), l_14)), g_13.f0)), 6)))) > p_12.f2), p_12.f0)), g_8.f1)), l_134[0][0]))))), 0UL))), 4)) || 1UL) > g_99) ^ g_13.f0) && 0xB0B75AD716728684LL) , g_13.f1) | g_13.f3) < l_14), l_14)) == 1L);
    return g_135;
}



static uint32_t  func_15(int16_t  p_16, uint32_t  p_17)
{ 
    int8_t l_29 = (-9L);
    int32_t l_30 = 0xA2967684L;
    if ((l_30 = (p_16 > (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(6UL, ((safe_sub_func_uint16_t_u_u(((p_16 | (safe_mod_func_uint8_t_u_u(255UL, p_16))) , 0x79C9L), 65535UL)) == l_29))), p_16)))))
    { 
        struct S1 l_35 = {1L,0x826243A5D8D34108LL,{0xA7AD11E7L,-7L,0x97AB83DEL,65531UL},0UL};
        const struct S2 l_36 = {8UL};
        for (l_29 = 0; (l_29 > 6); ++l_29)
        { 
            uint16_t l_43[1][3];
            int32_t l_44 = 5L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_43[i][j] = 0x3B6AL;
            }
            l_44 ^= (safe_lshift_func_int16_t_s_s((l_30 = ((l_35 , (l_36 , (l_43[0][2] = (safe_mul_func_uint8_t_u_u(l_30, (((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(l_30, p_16)) && g_8.f1), 8L)) <= 0L) , 0x4DL)))))) | g_8.f0)), g_13.f1));
            g_13.f0 = g_13.f3;
            l_30 = (g_8 , ((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(l_30, (((~4294967288UL) , (0x1586L > l_35.f3)) != 8L))), l_35.f1)) == 0x37C508211ABD849ELL));
        }
    }
    else
    { 
        struct S2 l_50 = {1UL};
        uint32_t l_56[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        union U4 l_57[3][1] = {{{1UL}},{{1UL}},{{1UL}}};
        int32_t l_58 = 0L;
        uint16_t l_83 = 0UL;
        int32_t l_92[2][3][5] = {{{0x9E4C9CD7L,(-6L),0xD99DD6BBL,(-6L),0x9E4C9CD7L},{0xA57EF93BL,1L,0xA57EF93BL,0xA57EF93BL,1L},{0x9E4C9CD7L,(-6L),0xAD53B930L,(-6L),0xAD53B930L}},{{1L,1L,0x5E18DB56L,1L,1L},{0xAD53B930L,(-6L),0xAD53B930L,(-6L),0x9E4C9CD7L},{1L,0xA57EF93BL,0xA57EF93BL,1L,0xA57EF93BL}}};
        int i, j, k;
        g_13.f0 = ((l_50 , (l_29 | (~(safe_mod_func_uint64_t_u_u(((((safe_mod_func_int16_t_s_s(g_8.f1, g_13.f1)) != l_56[1]) & g_13.f1) , 0x49EC59C4D355714ALL), l_29))))) || p_17);
        if ((3UL || (l_57[1][0] , (l_58 = g_13.f1))))
        { 
            uint64_t l_61 = 18446744073709551615UL;
            for (p_17 = (-16); (p_17 == 56); p_17 = safe_add_func_int32_t_s_s(p_17, 3))
            { 
                l_61--;
                if (g_13.f1)
                    continue;
                g_77[1][3][1] ^= (((((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((~(g_8.f1 || (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(l_50.f0, (((p_17 > ((safe_mod_func_int64_t_s_s((p_16 != g_13.f3), l_29)) > 8UL)) && l_61) && 18446744073709551615UL))), p_17)))), g_13.f0)) , g_8.f0), g_13.f1)) >= l_30) , 0x7C38L) == 0xE6FAL) == 18446744073709551615UL);
            }
            g_13.f0 = ((safe_mod_func_int32_t_s_s((l_92[1][0][3] = (+(safe_div_func_int64_t_s_s((((l_83 | (((safe_mul_func_int8_t_s_s(p_16, (((l_58 &= (safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(0xFDL, (safe_div_func_int16_t_s_s(l_56[2], g_77[1][1][1])))), 0x31L))) , 0x1143DC2BL) , p_16))) || l_30) ^ 0x239EB3E32E7287D2LL)) > p_17) , l_56[1]), l_30)))), g_13.f0)) , l_56[1]);
        }
        else
        { 
            struct S2 l_93 = {0x1480L};
            g_13.f0 = ((l_93 , ((safe_mul_func_int16_t_s_s(p_16, l_30)) & p_17)) ^ p_16);
        }
    }
    return g_13.f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    transparent_crc(g_13.f3, "g_13.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_77[i][j][k], "g_77[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_139[i], "g_139[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_147[i], "g_147[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_152[i], "g_152[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
