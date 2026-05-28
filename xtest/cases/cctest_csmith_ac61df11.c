// SPDX-License-Identifier: MIT
// cctest_csmith_ac61df11.c --- cctest case csmith_ac61df11 (csmith seed 2892095249)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x392b9b8 */
/* @exp_ticks 0x52c9 */

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

// Options:   -s 2892095249 -o /tmp/csmith_gen_sy4n2q2f/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int8_t  f1;
   uint32_t  f2;
   int16_t  f3;
   int16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint64_t  f0;
};
#pragma pack(pop)

union U2 {
   int8_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
};


static const union U2 g_4[4][2][3] = {{{{0x6CL},{-8L},{4L}},{{2L},{-8L},{2L}}},{{{1L},{0x6CL},{4L}},{{1L},{1L},{0x6CL}}},{{{2L},{0x6CL},{0x6CL}},{{0x6CL},{-8L},{4L}}},{{{2L},{-8L},{2L}},{{1L},{0x6CL},{4L}}}};
static int32_t g_5 = 2L;
static int32_t g_8 = 0x8B081589L;
static struct S0 g_47 = {0xFB6675F7L,0x3EL,0x2CFCCFF5L,0x9F7EL,0x8FFCL,0UL};
static int32_t g_52 = 1L;
static uint32_t g_54 = 0xA7AA5570L;
static int8_t g_71 = 0x8EL;
static int64_t g_74[5] = {1L,1L,1L,1L,1L};
static int64_t g_78 = 0x787CBDB463C3EAA4LL;
static int32_t g_79 = 7L;
static uint32_t g_80 = 7UL;
static int64_t g_103[4] = {0x52762AA9168F8553LL,0x52762AA9168F8553LL,0x52762AA9168F8553LL,0x52762AA9168F8553LL};
static uint32_t g_104 = 0xA7A66DA9L;
static int8_t g_107[3] = {0xD5L,0xD5L,0xD5L};
static uint32_t g_109[5][3][5] = {{{0x7D6E7134L,1UL,0x7D6E7134L,0UL,0x0D90DC82L},{8UL,1UL,18446744073709551613UL,8UL,18446744073709551611UL},{18446744073709551613UL,0UL,0UL,5UL,0UL}},{{18446744073709551615UL,0x389647EDL,8UL,0x389647EDL,18446744073709551615UL},{0xDF0D848CL,0xBAF9760DL,0x0D90DC82L,0xBB27750EL,5UL},{8UL,0x21C193A1L,1UL,18446744073709551613UL,18446744073709551607UL}},{{0x1C81CAAAL,0x0D90DC82L,5UL,0xBAF9760DL,5UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551610UL,1UL,18446744073709551615UL},{5UL,18446744073709551606UL,0x7D6E7134L,0UL,0UL}},{{8UL,18446744073709551611UL,18446744073709551607UL,0UL,0x389647EDL},{0x984B8F16L,18446744073709551606UL,18446744073709551606UL,0x984B8F16L,1UL},{0x21C193A1L,18446744073709551613UL,0x27E379CBL,18446744073709551615UL,0xB9F5A9ACL}},{{0x7D6E7134L,0x0D90DC82L,0x20D768DBL,0x1C81CAAAL,18446744073709551606UL},{18446744073709551611UL,0x21C193A1L,18446744073709551615UL,18446744073709551615UL,0x21C193A1L},{0UL,0xBAF9760DL,0xE7220935L,0x984B8F16L,0xDF0D848CL}}};



static int32_t  func_1(void);
static struct S1  func_2(const union U2  p_3);
static struct S1  func_13(struct S1  p_14, int32_t  p_15, struct S0  p_16, int32_t  p_17);
static struct S0  func_21(uint64_t  p_22, int8_t  p_23);




static int32_t  func_1(void)
{ 
    int8_t l_120 = 1L;
    struct S0 l_122 = {0x1896133EL,0xA8L,0x58C8BF5EL,0L,-6L,8UL};
    l_122 = (func_2(g_4[1][0][0]) , ((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((l_120 ^ (!(l_120 & g_54))), l_120)) ^ 9L), l_120)) , l_122));
    return g_74[0];
}



static struct S1  func_2(const union U2  p_3)
{ 
    struct S0 l_114 = {0x66F312D9L,0xA3L,1UL,0xCC17L,8L,0x22B304CAL};
    struct S1 l_115 = {0xA128892B40E8EEE9LL};
    for (g_5 = 0; (g_5 > 21); g_5++)
    { 
        const int8_t l_11 = 0x8DL;
        struct S1 l_18[5][1][1] = {{{{0xD66DE6B9338886A6LL}}},{{{0xB719D87263B0A6D0LL}}},{{{0xD66DE6B9338886A6LL}}},{{{0xB719D87263B0A6D0LL}}},{{{0xD66DE6B9338886A6LL}}}};
        struct S0 l_19 = {0L,0x72L,4294967286UL,0x9655L,0x653EL,0xF36A5B5CL};
        int32_t l_113 = 4L;
        int i, j, k;
        for (g_8 = 1; (g_8 <= 22); g_8 = safe_add_func_uint8_t_u_u(g_8, 4))
        { 
            if (l_11)
                break;
        }
        l_113 |= (!(func_13(l_18[2][0][0], p_3.f0, l_19, g_5) , g_74[0]));
        return l_18[2][0][0];
    }
    l_114 = l_114;
    return l_115;
}



static struct S1  func_13(struct S1  p_14, int32_t  p_15, struct S0  p_16, int32_t  p_17)
{ 
    uint32_t l_58 = 0UL;
    int32_t l_68 = (-9L);
    int8_t l_70 = 0L;
    int32_t l_77 = (-1L);
    struct S1 l_112 = {0x61EAE6C69FB00B42LL};
    if (p_17)
    { 
        struct S0 l_20[5][2] = {{{0L,0xDBL,1UL,-1L,-1L,0UL},{0L,0xDBL,1UL,-1L,-1L,0UL}},{{0L,0xDBL,1UL,-1L,-1L,0UL},{0L,0xDBL,1UL,-1L,-1L,0UL}},{{0L,0xDBL,1UL,-1L,-1L,0UL},{0L,0xDBL,1UL,-1L,-1L,0UL}},{{0L,0xDBL,1UL,-1L,-1L,0UL},{0L,0xDBL,1UL,-1L,-1L,0UL}},{{0L,0xDBL,1UL,-1L,-1L,0UL},{0L,0xDBL,1UL,-1L,-1L,0UL}}};
        int32_t l_69 = 0x891BC53CL;
        int32_t l_73 = 0xCF981355L;
        int32_t l_75 = (-1L);
        int64_t l_99 = 0x1DE5517414AAF767LL;
        int i, j;
        for (p_15 = 1; (p_15 >= 0); p_15 -= 1)
        { 
            uint16_t l_28 = 4UL;
            int32_t l_29 = 1L;
            int32_t l_76[5][4][4] = {{{6L,(-3L),0xE630EE3EL,(-3L)},{(-3L),1L,0xE630EE3EL,0xE630EE3EL},{6L,6L,(-3L),0xE630EE3EL},{(-9L),1L,(-9L),(-3L)}},{{(-9L),(-3L),(-3L),(-9L)},{6L,(-3L),0xE630EE3EL,(-3L)},{(-3L),1L,0xE630EE3EL,0xE630EE3EL},{6L,6L,(-3L),0xE630EE3EL}},{{(-9L),1L,(-9L),(-3L)},{(-9L),(-3L),(-3L),(-9L)},{6L,(-3L),0xE630EE3EL,(-3L)},{(-3L),1L,0xE630EE3EL,0xE630EE3EL}},{{6L,6L,(-3L),0xE630EE3EL},{(-9L),1L,(-9L),(-3L)},{(-9L),(-3L),(-3L),(-9L)},{6L,(-3L),0xE630EE3EL,(-3L)}},{{(-3L),1L,0xE630EE3EL,0xE630EE3EL},{6L,6L,(-3L),0xE630EE3EL},{(-9L),1L,(-9L),(-3L)},{(-9L),(-3L),(-3L),(-9L)}}};
            int i, j, k;
            for (p_16.f0 = 0; (p_16.f0 <= 1); p_16.f0 += 1)
            { 
                int i, j;
                l_20[(p_15 + 3)][p_15] = func_21((g_5 != ((safe_lshift_func_uint8_t_u_u((g_4[1][0][0].f0 <= ((safe_mul_func_int8_t_s_s(l_28, (l_29 &= (-1L)))) && g_5)), 3)) | 4294967289UL)), p_14.f0);
                g_8 = 0x5026E73BL;
            }
            for (l_28 = (-1); (l_28 >= 33); l_28++)
            { 
                int32_t l_72[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_72[i] = 0x9A6D6C57L;
                g_8 = l_58;
                g_8 = p_16.f5;
                g_8 |= (!(safe_sub_func_int32_t_s_s((((safe_div_func_int64_t_s_s(((g_71 |= (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((g_80++), 1)), (~(safe_lshift_func_uint8_t_u_u(p_15, (((safe_add_func_uint64_t_u_u(18446744073709551609UL, (safe_mul_func_int16_t_s_s(l_28, g_47.f1)))) && p_14.f0) >= l_77))))))) == g_54), l_76[2][1][2])) != p_16.f4) > l_69), l_76[2][1][2])));
            }
            g_47 = func_21(p_16.f2, (((((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((!(safe_add_func_uint64_t_u_u((((g_47.f5 || g_47.f3) & l_99) & p_15), g_79))), l_76[2][1][2])) , g_47.f4) , 0xD0B757F9L), 0L)), p_16.f2)) >= l_99) != 0x48L) == l_76[3][2][2]) < 0x96L));
        }
        for (p_16.f5 = (-12); (p_16.f5 == 22); p_16.f5++)
        { 
            for (l_75 = 4; (l_75 >= 1); l_75 -= 1)
            { 
                struct S1 l_102[3] = {{0xC28DFD1F3BD0260CLL},{0xC28DFD1F3BD0260CLL},{0xC28DFD1F3BD0260CLL}};
                int i;
                return l_102[1];
            }
        }
        g_104--;
    }
    else
    { 
        int32_t l_108 = 1L;
        g_109[0][2][1]--;
    }
    return l_112;
}



static struct S0  func_21(uint64_t  p_22, int8_t  p_23)
{ 
    struct S0 l_30 = {0x1930E88FL,-9L,0xE511AFD2L,-9L,0x2DC0L,0x78C76445L};
    int32_t l_33 = 0x2651EF22L;
    const uint32_t l_49[3][3][4] = {{{0xDE484183L,0xA5C12BBFL,0xDE484183L,1UL},{0xDE484183L,1UL,0xDE484183L,0xA5C12BBFL},{0xDE484183L,0xA5C12BBFL,0xDE484183L,1UL}},{{0xDE484183L,1UL,0xDE484183L,0xA5C12BBFL},{0xDE484183L,0xA5C12BBFL,0xDE484183L,1UL},{0xDE484183L,1UL,0xDE484183L,0xA5C12BBFL}},{{0xDE484183L,0xA5C12BBFL,0xDE484183L,1UL},{0xDE484183L,1UL,0xDE484183L,0xA5C12BBFL},{0xDE484183L,0xA5C12BBFL,0xDE484183L,1UL}}};
    int32_t l_50 = 0x2CFB7918L;
    struct S0 l_55 = {0x141EDA73L,-5L,4294967287UL,0L,0x0CC8L,5UL};
    int i, j, k;
    l_30 = l_30;
    for (l_30.f4 = 0; (l_30.f4 > (-1)); l_30.f4 = safe_sub_func_uint16_t_u_u(l_30.f4, 1))
    { 
        uint16_t l_34 = 0xEB8FL;
        int32_t l_48 = (-1L);
        int64_t l_51 = 0xEB766298A20B4D66LL;
        int32_t l_53 = 8L;
        --l_34;
        l_33 |= (-1L);
        g_54 &= (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_5, (((safe_add_func_int8_t_s_s((g_47.f1 = (safe_rshift_func_uint16_t_u_u((l_53 = ((g_52 ^= ((safe_rshift_func_uint16_t_u_u(((((g_47 , 0x780915D2L) & (g_8 = (l_50 = ((l_48 = (l_33 ^= p_22)) == l_49[2][2][2])))) , l_51) >= g_4[1][0][0].f0), 2)) > l_30.f5)) || l_30.f5)), p_23))), g_47.f3)) || l_49[0][1][2]) != l_30.f5))), 65535UL));
    }
    return l_55;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_4[i][j][k].f0, "g_4[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_47.f1, "g_47.f1", print_hash_value);
    transparent_crc(g_47.f2, "g_47.f2", print_hash_value);
    transparent_crc(g_47.f3, "g_47.f3", print_hash_value);
    transparent_crc(g_47.f4, "g_47.f4", print_hash_value);
    transparent_crc(g_47.f5, "g_47.f5", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);

    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_103[i], "g_103[i]", print_hash_value);

    }
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_109[i][j][k], "g_109[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
