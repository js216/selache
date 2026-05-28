// SPDX-License-Identifier: MIT
// cctest_csmith_05a60165.c --- cctest case csmith_05a60165 (csmith seed 94765413)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc1500919 */
/* @exp_ticks 0x4738 */

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

// Options:   -s 94765413 -o /tmp/csmith_gen_qwrdtimd/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int64_t  f1;
   int32_t  f2;
   const uint32_t  f3;
};
#pragma pack(pop)

union U1 {
   uint8_t  f0;
   const uint32_t  f1;
   uint64_t  f2;
   int32_t  f3;
};


static int32_t g_22 = (-7L);
static int32_t g_39 = 0x7E91C178L;
static uint8_t g_62 = 8UL;
static struct S0 g_92 = {0x98AE1F637114C0ACLL,0x258FD7CB4E35EE06LL,0x66B510C1L,0xED05CE63L};
static uint32_t g_93[1][1][2] = {{{0UL,0UL}}};
static uint64_t g_126 = 0x127F58F69C2BC1C0LL;
static int16_t g_131[3][4] = {{(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L)}};
static int32_t g_133[4][2][5] = {{{0L,0L,0xE5BA6927L,1L,0xB0400E0BL},{0x97889B5EL,0x11996AC1L,1L,1L,0L}},{{0x6ABE4C4CL,1L,0L,0xDA256C2DL,0xC46DEB76L},{0xDA256C2DL,0x11996AC1L,0x4E95A61DL,0x4E95A61DL,0x11996AC1L}},{{0L,0L,(-4L),0x4E95A61DL,(-1L)},{0xF927AEA6L,(-1L),0xAF6ACB5BL,0xDA256C2DL,1L}},{{1L,1L,0x4E95A61DL,0xAF6ACB5BL,0xE5BA6927L},{1L,(-4L),0xE5BA6927L,(-4L),1L}}};
static int8_t g_190 = 0x76L;
static uint8_t g_237 = 6UL;
static uint8_t g_252[3] = {0xC5L,0xC5L,0xC5L};
static uint32_t g_343 = 18446744073709551610UL;
static int32_t g_387 = 0x807EF009L;
static uint32_t g_585 = 0xEBFE9D7FL;
static int32_t g_602 = 5L;
static int8_t g_639 = 0x1EL;
static uint32_t g_647 = 0UL;
static union U1 g_758 = {0x77L};



static uint8_t  func_1(void);
static int16_t  func_4(uint16_t  p_5, const uint32_t  p_6, int32_t  p_7);
static uint16_t  func_8(uint8_t  p_9, int32_t  p_10);
static uint8_t  func_11(uint32_t  p_12, const uint8_t  p_13, uint8_t  p_14);




static uint8_t  func_1(void)
{ 
    int16_t l_15 = 0L;
    uint64_t l_18 = 18446744073709551611UL;
    int32_t l_796 = 0x71C02737L;
    l_796 = (safe_mul_func_int16_t_s_s(func_4(func_8(func_11(l_15, (safe_lshift_func_int16_t_s_u(l_18, (safe_lshift_func_uint16_t_u_s((+g_22), 7)))), (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((((((l_15 == g_22) >= (-8L)) == l_18) , g_22) || l_15), g_22)) | l_18), g_22))), l_18), g_131[2][0], l_18), g_639));
    return g_93[0][0][1];
}



static int16_t  func_4(uint16_t  p_5, const uint32_t  p_6, int32_t  p_7)
{ 
    struct S0 l_525 = {0x343FA86A4C04676BLL,0xBB46BEBC71706491LL,-1L,0x2FD998FBL};
    int32_t l_533 = 0xAB45704FL;
    int32_t l_534 = 0xB484295FL;
    uint8_t l_550 = 0x63L;
    int32_t l_570[3];
    union U1 l_586[1][1][4] = {{{{0xC9L},{0xC9L},{0xC9L},{0xC9L}}}};
    int64_t l_604 = 1L;
    uint8_t l_621[4][2] = {{0x91L,0x91L},{0xE9L,0x91L},{0x91L,0xE9L},{0x91L,0x91L}};
    uint8_t l_755 = 246UL;
    int32_t l_781[3];
    const int32_t l_789 = (-10L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_570[i] = 0xD5E26DA1L;
    for (i = 0; i < 3; i++)
        l_781[i] = (-10L);
    for (g_22 = 0; (g_22 <= (-2)); g_22 = safe_sub_func_int8_t_s_s(g_22, 6))
    { 
        struct S0 l_504 = {0xE6D67468DFB35ACFLL,8L,0x228E07A7L,0x08F1F415L};
        int32_t l_551[3][3][1] = {{{0x1FC9181AL},{0xFB84D03BL},{0x1FC9181AL}},{{0xFB84D03BL},{0x1FC9181AL},{0xFB84D03BL}},{{0x1FC9181AL},{0xFB84D03BL},{0x1FC9181AL}}};
        int32_t l_596 = (-1L);
        int8_t l_638 = (-1L);
        uint16_t l_695 = 65526UL;
        int8_t l_711 = 0x23L;
        const int8_t l_720 = (-1L);
        int32_t l_753 = 0xB76ED0D1L;
        int32_t l_754 = 0x4B8A9A32L;
        uint32_t l_761 = 0x2F68489EL;
        int i, j, k;
        for (g_126 = 29; (g_126 >= 38); g_126 = safe_add_func_int16_t_s_s(g_126, 9))
        { 
            int8_t l_521[4][1][2] = {{{0xABL,0xABL}},{{0xABL,0xABL}},{{0xABL,0xABL}},{{0xABL,0xABL}}};
            int32_t l_522 = 0x73A9112BL;
            struct S0 l_542 = {1L,0x4E0BC62BDA8A6224LL,0xAE150264L,0x97274D50L};
            int i, j, k;
            if ((0xC7D5L != g_92.f3))
            { 
                g_133[0][0][4] = (safe_rshift_func_int16_t_s_u((l_504 , g_131[2][3]), 3));
                return p_7;
            }
            else
            { 
                uint16_t l_535[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_535[i] = 0x0738L;
                l_522 = (g_387 = (+(safe_add_func_uint8_t_u_u((g_92 , 0x7CL), (((safe_lshift_func_int8_t_s_s((g_190 |= (~p_5)), (((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((((safe_add_func_uint16_t_u_u(((g_39 || p_7) < g_387), 0x55CDL)) , 6UL) <= p_6) & p_7), l_521[1][0][0])), 11)), 0)) != 0x56072FF7L) ^ p_6) , p_6) | 0x8284C366L))) > 0L) == (-1L))))));
                l_535[1] = (safe_mul_func_uint16_t_u_u(((((((l_534 = ((l_533 = (l_525 , (((safe_sub_func_uint16_t_u_u(g_62, (((l_525.f0 && ((+(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_6 < l_525.f3), (-9L))), 1)) , g_387) != 1UL)) && 0xC05A39AEL)) , 0x7AECABF22F9A0F08LL) != l_522))) != l_521[1][0][0]) , (-2L)))) ^ 0UL)) || 0x34L) < g_252[1]) , p_7) < 0x8D05F86EL) == 0xF9788EBA344D7334LL), l_521[0][0][1]));
                g_387 &= 0L;
            }
            if (g_237)
                continue;
            l_551[0][0][0] = (safe_mul_func_uint8_t_u_u((l_525.f1 > ((safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((l_542 , (safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((!(g_92.f0 ^= l_522)), 0)) & ((safe_rshift_func_int8_t_s_u((((1L | l_533) & 0x8F233E41L) ^ 0xA7L), l_504.f2)) , 6UL)) == p_5), l_542.f0))) == 0xBC01CAA2L), l_550)) , g_92.f2), g_343)) > 0xAD088C571E0C3175LL)), 0x88L));
        }
        if (((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((((g_343 ^= 0UL) , (safe_mul_func_int16_t_s_s((l_533 = (safe_lshift_func_uint16_t_u_s(p_6, 1))), g_252[0]))) && ((safe_add_func_uint64_t_u_u((((l_533 = (((l_550 <= p_6) , g_131[2][0]) , 18446744073709551615UL)) != l_504.f3) > g_133[0][0][4]), l_525.f0)) >= l_525.f1)), l_504.f0)), (-1L))) ^ p_6))
        { 
            int8_t l_565[4];
            int32_t l_569 = 0L;
            int32_t l_571 = (-4L);
            int32_t l_572[1];
            int i;
            for (i = 0; i < 4; i++)
                l_565[i] = 3L;
            for (i = 0; i < 1; i++)
                l_572[i] = 0x9BE04A11L;
            for (g_92.f0 = 0; (g_92.f0 > (-26)); g_92.f0 = safe_sub_func_int16_t_s_s(g_92.f0, 9))
            { 
                int32_t l_564 = 9L;
                int32_t l_566 = 0xB5089B28L;
                int32_t l_567 = (-3L);
                int32_t l_568[3][4][1] = {{{(-5L)},{0x1CC9CBEEL},{0x1CC9CBEEL},{(-5L)}},{{0x8E9AF74BL},{(-5L)},{0x1CC9CBEEL},{0x1CC9CBEEL}},{{(-5L)},{0x8E9AF74BL},{(-5L)},{0x1CC9CBEEL}}};
                uint16_t l_573 = 0UL;
                int i, j, k;
                --l_573;
            }
            g_387 = (g_133[0][0][4] = ((safe_div_func_int16_t_s_s((l_572[0] &= ((safe_div_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((g_131[0][0] = (!(l_504.f3 || (l_571 & (safe_sub_func_int8_t_s_s((g_585 = (g_190 = (-9L))), ((((l_586[0][0][2] , g_92.f1) == p_6) == 0L) | 4294967290UL))))))), l_525.f0)) > g_93[0][0][1]), 0xC0D00F2DCCA36648LL)) && l_569)), p_6)) , g_133[0][0][4]));
        }
        else
        { 
            int16_t l_591 = 0L;
            int32_t l_597[3];
            int i;
            for (i = 0; i < 3; i++)
                l_597[i] = 0x76E9477BL;
            for (g_92.f0 = 0; (g_92.f0 == 24); g_92.f0 = safe_add_func_int16_t_s_s(g_92.f0, 9))
            { 
                return p_5;
            }
            if ((1L || (((l_591 == l_504.f1) <= (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(0x46L, g_252[0])) < l_586[0][0][2].f0), l_596))) == l_596)))
            { 
                int32_t l_598 = 0xCC15319EL;
                int32_t l_599 = 0x9DEF7B2CL;
                int32_t l_600 = 0xF18C845FL;
                int32_t l_601 = 0xBEAA2B06L;
                int32_t l_603 = 4L;
                int32_t l_605 = 0xD805E119L;
                int32_t l_606 = 0x8330DDA5L;
                int32_t l_607 = 1L;
                int32_t l_608 = (-1L);
                int32_t l_609 = 0xAD3105DCL;
                int32_t l_610 = (-1L);
                int32_t l_611 = 0xAC2D5B62L;
                int32_t l_612[4];
                uint32_t l_613 = 18446744073709551610UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_612[i] = 0xBEF7557BL;
                l_597[2] = g_93[0][0][1];
                l_613--;
            }
            else
            { 
                int8_t l_616 = (-7L);
                int32_t l_617 = 0L;
                int32_t l_618 = (-1L);
                int32_t l_619 = 0xE7AFD318L;
                int32_t l_620[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_620[i] = 0x7AEEE0C1L;
                l_621[2][0]--;
                g_133[1][0][2] = (safe_add_func_uint16_t_u_u(0x6A3BL, g_387));
            }
        }
        if ((l_596 ^= (safe_rshift_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((l_551[0][0][0] && (((g_92.f1 = ((safe_unary_minus_func_uint8_t_u((!(safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((p_5 ^ 1L), (safe_mul_func_uint16_t_u_u((((l_638 ^= l_525.f1) != (-1L)) == 255UL), 0x3A5DL)))) , 0UL), g_387))))) > 1L)) | g_639) < p_6)), 0x1DL)) == 0x88E7C59EL), 6))))
        { 
            int32_t l_660[5];
            const int16_t l_696[1] = {1L};
            int16_t l_697 = 0L;
            int32_t l_698[3][5][1] = {{{0xE7E1D9EBL},{(-8L)},{0xE7E1D9EBL},{(-4L)},{(-4L)}},{{0xE7E1D9EBL},{(-8L)},{0xE7E1D9EBL},{(-4L)},{(-4L)}},{{0xE7E1D9EBL},{(-8L)},{0xE7E1D9EBL},{(-4L)},{(-4L)}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_660[i] = 0xDF229256L;
            for (g_190 = 0; (g_190 <= 1); g_190 += 1)
            { 
                if (g_190)
                    break;
                g_133[2][1][3] ^= (+g_39);
            }
            l_534 &= (safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s((((safe_div_func_uint64_t_u_u((((--g_647) <= ((((((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((((g_252[0]++) != (((safe_add_func_uint32_t_u_u((((safe_add_func_int64_t_s_s(((safe_div_func_int8_t_s_s(g_126, g_22)) && (g_62 |= (safe_rshift_func_uint8_t_u_s((((((((--g_126) == ((((safe_add_func_uint16_t_u_u(l_551[1][0][0], (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((l_533 = (safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((l_695 > p_6) && (-5L)), 1)), g_602)) & 0xEA827975FE45AD9BLL) || g_92.f0), g_131[2][0])), 0x953C15ADL)), p_5)), p_6))), g_93[0][0][0])), 12)), l_570[1])))) != 0xD2C5115AL) > l_695) == 0x51E1EF2490AA573BLL)) , g_131[1][3]) & 0xC17627B6L) < 0x459773ACBE8001C5LL) == l_696[0]) & p_7), l_660[0])))), g_602)) || g_92.f0) , p_7), 0x5BF89014L)) <= g_93[0][0][0]) && 0UL)) || l_697), 6)), l_504.f1)) > g_39) && l_586[0][0][2].f0), g_602)) & 0UL) > g_131[2][0]), l_697)) && p_6) == l_660[0]) && g_585) || 0xE3283A13E3D28727LL) , 0xF3DEL)) != p_5), p_7)) && p_6) | l_698[2][3][0]), 0xE15A02607B201E8FLL)), p_7));
            return l_696[0];
        }
        else
        { 
            int64_t l_706[4][4] = {{0xDF6CEEA973CF56FDLL,0xDF6CEEA973CF56FDLL,0xD5349AAB86DE7474LL,0x533DBDFC090A7F49LL},{0xE805BD349BC867A2LL,(-1L),0xE805BD349BC867A2LL,0xD5349AAB86DE7474LL},{0xE805BD349BC867A2LL,0xD5349AAB86DE7474LL,0xD5349AAB86DE7474LL,0xE805BD349BC867A2LL},{0xDF6CEEA973CF56FDLL,0xD5349AAB86DE7474LL,0x533DBDFC090A7F49LL,0xD5349AAB86DE7474LL}};
            int64_t l_743 = 0L;
            uint8_t l_745 = 0UL;
            int16_t l_746 = 0xA088L;
            int32_t l_747 = (-2L);
            int32_t l_749 = (-1L);
            int32_t l_752[2][2][4] = {{{0xDEBBA013L,(-1L),(-4L),(-4L)},{(-1L),(-1L),0xDEBBA013L,(-4L)}},{{4L,(-1L),4L,0xDEBBA013L},{4L,0xDEBBA013L,0xDEBBA013L,4L}}};
            int i, j, k;
            if ((l_570[0] ^ (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_551[0][2][0] = (-7L)), ((l_570[1] >= ((safe_unary_minus_func_uint16_t_u((0x23B3L < 0x25BAL))) != l_695)) & l_706[3][1]))), p_7))))
            { 
                int64_t l_721 = 0L;
                int32_t l_722 = 0x73FE5B69L;
                struct S0 l_733 = {0xE1F256A3E920A235LL,0x69AFA6C75E6F0FC2LL,0xF350D01EL,0xCE100B60L};
                int64_t l_744 = 9L;
                l_722 = (((safe_add_func_uint32_t_u_u((((g_647 < ((safe_lshift_func_uint8_t_u_u((l_711 > ((safe_lshift_func_uint8_t_u_s(((safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(l_504.f1, 7)) && (safe_mul_func_uint8_t_u_u((l_720 != l_504.f3), l_504.f1))), l_706[0][2])) , g_22), 0)) >= g_602)), 4)) || 0x7D05L)) , l_721) != l_551[0][0][0]), p_7)) , 0xB6L) >= p_6);
                l_722 = (l_747 = (safe_lshift_func_uint16_t_u_s((((safe_sub_func_int16_t_s_s((0x51B06BEB3631CC47LL ^ ((safe_mod_func_int16_t_s_s((((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((l_733 , (safe_mod_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((0x8EF22322D9C916FFLL ^ ((((+(safe_mul_func_uint16_t_u_u((3L && p_6), p_7))) <= l_743) , g_62) != l_721)), 6L)), l_744)) >= p_6) == l_745) & p_6), g_92.f0))), 0)), l_722)) >= g_131[1][3]) , l_746), 0x3D6BL)) & 0x61ADL)), g_252[1])) == (-7L)) , 65532UL), 8)));
            }
            else
            { 
                int8_t l_748 = 0L;
                int32_t l_750 = 0x8BD29F10L;
                int32_t l_751[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_751[i] = 3L;
                --l_755;
                l_586[0][0][2].f3 = 0x6792AD92L;
            }
            if (((((g_758 , (safe_mod_func_uint64_t_u_u(((p_5 ^ l_720) , ((l_621[2][1] < l_761) >= g_252[0])), 0xB6FDB0506BF24869LL))) , 0L) | l_525.f3) && l_711))
            { 
                int8_t l_780 = 0x74L;
                l_781[1] = (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_5, 3)), (l_586[0][0][2].f3 = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((g_92.f2 = (p_7 = p_6)) , (safe_rshift_func_uint16_t_u_s((((g_758.f2 = (0x3A813C68L >= (safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(l_746, p_5)) == l_570[1]) , p_6), g_758.f0)))) >= l_780) >= g_252[0]), 13))), p_6)) != g_133[0][0][4]), l_621[2][0])), 0x1CA0L))))) || l_638), g_387));
                if (l_747)
                    continue;
                l_551[2][2][0] = ((g_252[1] <= (safe_div_func_int64_t_s_s((g_92.f1 = (((((((g_92.f0 , ((0x103EF35EL == ((+(safe_mul_func_uint8_t_u_u((65535UL <= p_7), 0x71L))) == g_133[3][1][1])) , 0x47C408AFF209D155LL)) == p_7) > l_749) || g_190) > g_190) , g_387) > p_6)), p_7))) <= p_5);
            }
            else
            { 
                int32_t l_788 = (-1L);
                l_752[1][0][2] = ((~(p_7 >= (((l_788 |= g_92.f3) <= (((0xFDL || l_789) > l_570[1]) , l_781[0])) || p_6))) & g_22);
                l_747 = ((l_596 &= (l_534 |= (safe_sub_func_uint16_t_u_u((g_92.f0 == (safe_sub_func_uint8_t_u_u(((-1L) != g_647), (p_5 <= 0x49C1F746L)))), 0L)))) == p_6);
            }
            g_387 = ((safe_sub_func_int32_t_s_s(l_551[2][2][0], l_761)) || p_7);
        }
    }
    return l_621[2][0];
}



static uint16_t  func_8(uint8_t  p_9, int32_t  p_10)
{ 
    int32_t l_317[2][5] = {{0x2070FD3DL,0x2070FD3DL,0x2070FD3DL,0x2070FD3DL,0x2070FD3DL},{0xFBD6DB1EL,0x3B778325L,0xFBD6DB1EL,0x3B778325L,0xFBD6DB1EL}};
    int32_t l_376 = 0xC2C58BBAL;
    int32_t l_471 = 0L;
    int i, j;
    p_10 = (p_9 & 0UL);
    for (p_9 = 0; (p_9 >= 49); ++p_9)
    { 
        int64_t l_333[3];
        uint16_t l_342 = 0UL;
        int32_t l_367 = (-1L);
        uint16_t l_375 = 1UL;
        union U1 l_400 = {0xFDL};
        int64_t l_407 = (-1L);
        int64_t l_435 = (-3L);
        int i;
        for (i = 0; i < 3; i++)
            l_333[i] = 1L;
        for (g_92.f0 = 0; (g_92.f0 <= 2); g_92.f0 += 1)
        { 
            int32_t l_318 = 1L;
            int32_t l_319 = (-4L);
            int32_t l_320 = (-1L);
            int i;
            l_317[1][0] &= g_252[g_92.f0];
            for (g_62 = 0; (g_62 <= 0); g_62 += 1)
            { 
                uint32_t l_321[1][5];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_321[i][j] = 0xDCCFC093L;
                }
                --l_321[0][1];
                return g_252[(g_62 + 1)];
            }
            for (p_10 = 0; (p_10 >= 0); p_10 -= 1)
            { 
                int i, j, k;
                if (g_252[(p_10 + 1)])
                    break;
                return g_93[p_10][p_10][p_10];
            }
        }
        if ((safe_add_func_int64_t_s_s((+(g_92.f1 || ((g_92.f0 ^= (((((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(g_131[1][1], 2)) , ((safe_div_func_uint32_t_u_u(l_333[1], (safe_mod_func_int32_t_s_s((((((safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((l_317[1][0] & 0UL), l_342)) ^ 4294967291UL), p_10)) && (-1L)) <= l_317[1][0]) >= 4UL) > g_92.f2), l_342)))) & g_343)), 1UL)) & 4UL) || l_342) < l_317[1][0]) == p_9)) >= 2UL))), l_317[1][0])))
        { 
            uint32_t l_361 = 3UL;
            int32_t l_366 = 0L;
            int32_t l_368 = 1L;
            int32_t l_388 = 0xEA76DC1EL;
            uint32_t l_399[2][2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_399[i][j] = 18446744073709551606UL;
            }
            g_133[0][0][4] |= ((g_126 &= (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_367 = (((!5L) & ((((safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(p_9, ((safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(l_361, ((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((--g_237), ((safe_lshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((0x1694L <= (-5L)), p_10)), 2)) & (-1L)))) && l_361), l_367)) , g_190))) != (-9L)), p_9)), l_375)) ^ p_9))) , l_317[0][4]), 0L)) <= g_92.f3), 2)) <= 0xA7L) & p_10) || p_9)) > l_367)), 0x8B1BL)), 0x45D0L))) , l_376);
            if (p_10)
            { 
                g_133[0][0][4] ^= (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_387 = (((((p_10 || (g_92.f0 ^= (safe_mod_func_int8_t_s_s((g_190 = (p_9 & (((safe_lshift_func_int16_t_s_s((((g_92.f1 & ((p_10 >= p_10) >= 4294967295UL)) >= 0xC017L) , g_252[0]), p_10)) >= p_9) , l_361))), 0xC6L)))) || l_368) != p_9) != g_22) && l_368)), 65530UL)), l_388));
            }
            else
            { 
                g_22 = (p_9 >= ((safe_sub_func_int8_t_s_s(l_388, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_368, ((g_92.f0 = ((((safe_lshift_func_int16_t_s_u((((((((((safe_lshift_func_uint8_t_u_u((g_237 = (4294967295UL != g_133[0][0][4])), g_252[1])) >= l_399[1][0]) | 0x84L) , g_93[0][0][1]) | 0x2415FE07L) , 0UL) != 1UL) ^ 8L) || p_10), 8)) , l_400) , p_9) == g_133[1][1][3])) == g_133[0][1][2]))), l_317[1][2])))) >= g_133[1][1][1]));
                p_10 = (safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((g_237 | (((safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_uint64_t_u(p_10)))) <= (((((l_407 = p_9) && (safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((((g_387 , 1L) , 1L) < g_92.f3), g_131[1][3])), p_9))) == g_252[1]) , p_10) > 0L)) ^ 0x084E49481A19C31ALL)), g_92.f0)), (-6L)));
            }
            g_133[0][0][4] = 0x2EB42526L;
        }
        else
        { 
            uint16_t l_431 = 0UL;
            if ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((+((safe_sub_func_uint8_t_u_u(g_252[1], ((safe_lshift_func_int16_t_s_s(p_9, ((safe_mul_func_uint8_t_u_u((~(((!(g_22 < ((safe_sub_func_int32_t_s_s(l_376, 0x8CDB12CAL)) == g_92.f1))) , l_431) < g_92.f0)), p_10)) , g_237))) >= g_126))) , p_9)), g_131[0][3])) , p_10), g_92.f1)), p_9)), l_431)))
            { 
                uint32_t l_432 = 0xBF82D76AL;
                p_10 ^= 1L;
                ++l_432;
            }
            else
            { 
                union U1 l_436 = {0x56L};
                p_10 |= (l_435 , g_126);
                l_317[1][3] = (g_92.f3 , (0xD0C7AC6AL | (l_436 , ((l_436.f0 ^ l_436.f0) == p_9))));
            }
        }
    }
    for (g_387 = 5; (g_387 <= (-8)); g_387 = safe_sub_func_uint8_t_u_u(g_387, 1))
    { 
        int16_t l_446 = 0x0F77L;
        int32_t l_470[3];
        int64_t l_488[4];
        int i;
        for (i = 0; i < 3; i++)
            l_470[i] = 0x4E4C0E1AL;
        for (i = 0; i < 4; i++)
            l_488[i] = (-1L);
        for (p_10 = 0; (p_10 > 25); p_10 = safe_add_func_int64_t_s_s(p_10, 8))
        { 
            int32_t l_442 = (-1L);
            int32_t l_444 = (-9L);
            int32_t l_445 = (-1L);
            uint32_t l_463 = 0x65361546L;
            if (((safe_unary_minus_func_int8_t_s(l_442)) >= (+1L)))
            { 
                uint32_t l_447 = 0x1F3F1C0DL;
                if (g_133[0][0][4])
                    break;
                --l_447;
            }
            else
            { 
                int32_t l_464 = 1L;
                l_464 = (safe_mod_func_int8_t_s_s((g_92 , (safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mod_func_uint64_t_u_u(((((safe_mul_func_int16_t_s_s(0L, (safe_div_func_uint16_t_u_u(65535UL, g_92.f0)))) < 0x401372DB749B4CD9LL) || 0xF0L) || 0L), l_463)))), p_9)) >= l_444) <= 255UL), l_445))), g_252[1]));
            }
        }
        if (((+g_133[0][0][4]) ^ ((((((safe_add_func_int64_t_s_s((l_470[0] = (p_9 != (safe_mod_func_uint16_t_u_u(g_387, l_317[0][3])))), 0x379DEA74C86451FELL)) == l_471) <= g_343) & l_446) && l_446) <= 0x6E64F549L)))
        { 
            int32_t l_489[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_489[i][j] = 0xBABC889AL;
            }
            l_489[0][0] = (((g_190 ^= ((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((l_376 > 0UL), ((((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((((safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(g_39, 1)) & (((safe_add_func_int16_t_s_s(1L, p_10)) , g_133[3][0][4]) && g_92.f1)), 1L)), 0xD5DD3E96L)) == 0UL) , p_10) <= 0x305FA41EL), p_10)), 0x7DBBFAF5L)) == l_488[1]) == g_131[2][0]) | g_92.f1))), l_488[1])) == p_9)) >= l_471) < g_343);
        }
        else
        { 
            uint8_t l_495 = 0xAEL;
            for (g_22 = 0; (g_22 != 15); ++g_22)
            { 
                uint8_t l_492 = 0xA4L;
                l_492--;
                l_495--;
            }
        }
        if (l_470[0])
            break;
    }
    return g_92.f1;
}



static uint8_t  func_11(uint32_t  p_12, const uint8_t  p_13, uint8_t  p_14)
{ 
    uint64_t l_38 = 0x2AD015B01D976D99LL;
    union U1 l_61 = {0x41L};
    uint32_t l_80 = 0xCFEAA3CEL;
    int32_t l_81 = 0xAEBC0183L;
    int16_t l_120[4][1][3] = {{{(-1L),0L,(-1L)}},{{0xEE42L,0xA512L,0xEE42L}},{{(-1L),0L,(-1L)}},{{0xEE42L,0xA512L,0xEE42L}}};
    int32_t l_130 = (-1L);
    int32_t l_132[2][5] = {{0x4014C235L,0x4014C235L,0x4014C235L,0x4014C235L,0x4014C235L},{0L,(-8L),0L,(-8L),0L}};
    int32_t l_142 = 0x1F097456L;
    uint32_t l_181 = 1UL;
    int64_t l_185 = (-2L);
    uint16_t l_200[1][4] = {{8UL,8UL,8UL,8UL}};
    uint8_t l_251 = 0x39L;
    int16_t l_259[3][1];
    int16_t l_311[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_259[i][j] = (-6L);
    }
    for (i = 0; i < 1; i++)
        l_311[i] = 0x4903L;
    if (((~(safe_lshift_func_int8_t_s_s(p_12, ((g_22 == ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((((((safe_add_func_int16_t_s_s(p_12, (((safe_mul_func_uint16_t_u_u(g_22, l_38)) < g_22) || l_38))) , l_38) && p_12) & g_22) | 1UL) | 18446744073709551613UL), 1)), 65527UL)) > g_39)) <= 0x15L)))) != 0x9CBAL))
    { 
        int32_t l_42 = 0x26AE69EDL;
        int32_t l_63 = (-1L);
        int64_t l_64[2];
        int32_t l_79 = 7L;
        int i;
        for (i = 0; i < 2; i++)
            l_64[i] = (-2L);
        l_64[0] = (safe_lshift_func_int8_t_s_s((l_42 ^ (safe_mod_func_uint16_t_u_u(((((((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u((((l_63 = (safe_sub_func_int64_t_s_s((4294967293UL <= (l_38 < (safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((l_61.f3 = (l_61 , p_12)), 0xF963L)), g_39)), g_62)) , g_62) ^ 0xFD6F6066FA41D407LL), l_38)))), p_13))) == p_12) , l_63), g_39)) <= 0xEDFC7A8FL) ^ g_62) && 253UL), p_13)) == p_14) & 65535UL) <= p_13) , p_13) | 0xE85A6EDB5B292197LL), g_22))), 6));
        l_81 = (safe_unary_minus_func_int64_t_s(((+((safe_mod_func_int64_t_s_s((((safe_unary_minus_func_int32_t_s((safe_add_func_uint16_t_u_u(((p_14 != (((((safe_add_func_int64_t_s_s((0L ^ ((l_61.f3 ^= ((safe_mul_func_uint8_t_u_u(g_39, (~((safe_rshift_func_uint8_t_u_s(0x03L, 4)) , l_79)))) < 0x70EAL)) > 18446744073709551610UL)), l_64[0])) , l_80) & 0xA4BA9E7339AA88D1LL) , 246UL) | p_13)) > p_12), g_39)))) < g_22) ^ g_62), g_22)) | 247UL)) >= (-1L))));
    }
    else
    { 
        return g_22;
    }
    if (((safe_sub_func_int16_t_s_s((l_38 <= (safe_div_func_int8_t_s_s(((l_61.f3 = (g_62 && ((safe_sub_func_uint64_t_u_u((((l_81 = (safe_lshift_func_int16_t_s_s(l_61.f1, 1))) | (((g_92 , p_13) , 0x06FAL) != 65535UL)) | 4L), p_14)) & l_38))) ^ g_92.f0), l_80))), g_92.f2)) != l_80))
    { 
        uint16_t l_96 = 0x3A2CL;
        int32_t l_124 = 0xB10DF2DAL;
        int32_t l_125[3];
        uint16_t l_143 = 6UL;
        int i;
        for (i = 0; i < 3; i++)
            l_125[i] = 0xB320AFAFL;
        if (p_14)
        { 
            uint32_t l_106 = 0x285802EAL;
            int32_t l_121 = (-1L);
            int32_t l_122 = 0x40266A50L;
            int8_t l_123 = 1L;
            for (g_92.f2 = 0; (g_92.f2 <= 0); g_92.f2 += 1)
            { 
                int8_t l_105 = 0xD2L;
                int32_t l_107 = 0xCAE08EB4L;
                l_61.f3 ^= g_93[0][0][1];
                l_107 &= ((safe_rshift_func_int16_t_s_u(l_96, (((safe_lshift_func_uint8_t_u_s(8UL, 5)) < (safe_mod_func_int8_t_s_s(((l_81 |= ((((safe_rshift_func_int8_t_s_s((~((((((~(g_93[0][0][0] ^ (0x16D3L >= l_105))) == g_92.f0) < 1L) || p_14) | l_61.f1) < l_105)), 4)) ^ l_106) >= 0x08L) ^ p_12)) >= 0xEE9DAE1BL), g_39))) | p_14))) , g_39);
                l_120[1][0][1] = (safe_rshift_func_int8_t_s_s(g_22, (l_105 <= (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(g_39, l_96)) > g_22), p_14)), g_62)) ^ g_92.f1), 0x383EL)), p_13)))));
            }
            --g_126;
        }
        else
        { 
            int32_t l_129[5][2][4] = {{{0xB86E869CL,0xD083AED2L,0xD083AED2L,0xB86E869CL},{0xD083AED2L,0xB86E869CL,0x86226F51L,0L}},{{0xD083AED2L,0x86226F51L,0xD083AED2L,0xAC88EEA0L},{0xB86E869CL,0L,0xAC88EEA0L,0xAC88EEA0L}},{{0x86226F51L,0x86226F51L,(-5L),0L},{0L,0xB86E869CL,(-5L),0xB86E869CL}},{{0x86226F51L,0xD083AED2L,0xAC88EEA0L,(-5L)},{0xB86E869CL,0xD083AED2L,0xD083AED2L,0xB86E869CL}},{{0xD083AED2L,0xB86E869CL,0x86226F51L,0L},{0xD083AED2L,0x86226F51L,0xD083AED2L,0xAC88EEA0L}}};
            int32_t l_134 = 0xFFC78F56L;
            int32_t l_135 = 0x8CDD756EL;
            int32_t l_136 = (-2L);
            int32_t l_137 = 0xD75BC1B5L;
            int32_t l_138 = 0x8A808B72L;
            int32_t l_139 = (-5L);
            int32_t l_140 = 1L;
            int32_t l_141[1][4];
            int32_t l_146 = 0xC4E8C282L;
            uint16_t l_147 = 65535UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_141[i][j] = 1L;
            }
            --l_143;
            ++l_147;
            for (l_124 = 0; (l_124 <= 2); l_124 += 1)
            { 
                l_130 &= 0xCB9073E8L;
                return g_62;
            }
        }
        for (g_92.f1 = 29; (g_92.f1 >= 10); --g_92.f1)
        { 
            uint32_t l_152[4];
            int i;
            for (i = 0; i < 4; i++)
                l_152[i] = 0x2307A3C1L;
            ++l_152[2];
        }
    }
    else
    { 
        uint8_t l_164 = 0xE4L;
        union U1 l_165 = {0xDDL};
        int32_t l_182[5][5] = {{0xE42E39E4L,(-8L),(-8L),0xE42E39E4L,0x17BC323DL},{0x365C1E2DL,0x2E7BA114L,0x2E7BA114L,0x365C1E2DL,0xF21A0381L},{0xE42E39E4L,(-8L),(-8L),0xE42E39E4L,0x17BC323DL},{1L,0x365C1E2DL,0x365C1E2DL,1L,(-1L)},{0xC270F0C5L,0xE42E39E4L,0xE42E39E4L,0xC270F0C5L,(-1L)}};
        int32_t l_250 = 0xC2E01831L;
        uint32_t l_280 = 9UL;
        int32_t l_309[4][1][3] = {{{2L,2L,0xDA031FE6L}},{{2L,2L,0xDA031FE6L}},{{2L,2L,0xDA031FE6L}},{{2L,2L,0xDA031FE6L}}};
        int i, j, k;
        if ((safe_sub_func_uint32_t_u_u(((((!1L) | (~(0x44D47832723F9358LL <= (g_92 , (+(safe_mul_func_uint8_t_u_u((l_130 = (safe_unary_minus_func_uint64_t_u((!(((g_92.f0 ^ g_39) && g_133[3][0][3]) , l_164))))), g_131[2][0]))))))) , l_165) , g_39), p_12)))
        { 
            int8_t l_166[2];
            int i;
            for (i = 0; i < 2; i++)
                l_166[i] = 0xB9L;
            g_22 = (l_166[0] , (l_165.f3 = g_22));
            for (l_142 = 0; (l_142 >= 0); l_142 -= 1)
            { 
                int64_t l_180 = 2L;
                l_185 |= (((safe_add_func_uint16_t_u_u(l_165.f3, p_14)) & (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_181 = (+l_180)), ((--g_126) , g_39))), 0x89L)) <= p_12), 1UL)), l_166[1])), g_62)) & 0xA718L) ^ g_92.f3)) < l_164);
                if (g_133[2][0][1])
                    break;
            }
        }
        else
        { 
            uint8_t l_202 = 0xD4L;
            int32_t l_210 = 9L;
            int32_t l_211 = (-5L);
            int32_t l_212 = 0L;
            union U1 l_224 = {0x8BL};
            uint8_t l_229 = 7UL;
            const int8_t l_230 = 0L;
            int8_t l_231 = 1L;
            uint16_t l_232 = 0UL;
            int32_t l_233 = 4L;
            uint32_t l_234 = 0x1C58A5EDL;
            int32_t l_235[5];
            int32_t l_236[2];
            int i;
            for (i = 0; i < 5; i++)
                l_235[i] = 0x89A725E6L;
            for (i = 0; i < 2; i++)
                l_236[i] = 0x0D53DA7AL;
            if ((g_22 ^ (safe_mul_func_int16_t_s_s((l_164 == ((safe_lshift_func_uint8_t_u_s(0x6EL, 7)) , (g_190 = (p_14 || 0x661964D5L)))), 65535UL))))
            { 
                uint64_t l_191 = 0xCC681FB4F11C8045LL;
                l_191 &= (g_133[0][0][4] &= 0x74728182L);
                if (g_39)
                    goto lbl_201;
            }
            else
            { 
lbl_201:
                l_182[1][0] &= ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((p_12 ^ ((g_92.f0 , (safe_mod_func_int64_t_s_s(l_165.f0, (safe_sub_func_uint16_t_u_u(p_14, g_93[0][0][1]))))) & p_12)) >= g_62) != g_126), l_200[0][2])), p_13)) != 5L);
                l_212 = ((g_92 , (l_142 |= l_202)) ^ (((l_182[1][0] = (safe_sub_func_int32_t_s_s(0xA18FF7ECL, ((safe_div_func_int16_t_s_s((+(l_211 |= (l_210 = (((safe_sub_func_int8_t_s_s(g_39, p_12)) , 4294967295UL) || l_38)))), g_62)) || 0x38DD4518L)))) , p_13) , g_92.f0));
                l_234 = (((safe_mod_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((~l_130), (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(((l_224 , (l_210 = (((p_12 && (((((g_93[0][0][0] &= (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(l_182[0][1], p_13)), l_229))) ^ g_39) , 0x19A833028EE803E1LL) & l_230) < g_92.f2)) & (-3L)) <= 0UL))) >= l_202), g_92.f1)) && p_13), l_231)), l_120[3][0][1])))) <= l_232) >= 0x4F2F5FB297967E35LL), (-1L))) , l_233) ^ 1UL);
            }
            --g_237;
            g_133[0][0][4] = (safe_rshift_func_uint8_t_u_s(251UL, 2));
        }
        if ((((-1L) || (l_182[2][4] = ((g_93[0][0][0] ^ (safe_mod_func_uint64_t_u_u(((0x34L != (((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0xB8L, p_12)), g_92.f0)), l_250)) <= p_14) != g_237)) < l_251), g_252[0]))) <= l_182[2][0]))) , (-6L)))
        { 
            uint32_t l_272 = 0xFA78DD74L;
            int64_t l_291 = 0x114316DEF22C59ECLL;
            g_133[0][1][2] = (!(safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((((~(l_259[1][0] , (((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_div_func_int64_t_s_s(0x14B3650ACC4D4A8DLL, (l_132[0][2] = (++g_126)))) < (safe_mod_func_uint32_t_u_u((l_182[1][0] |= l_165.f0), ((safe_mod_func_uint32_t_u_u((l_259[2][0] , 0UL), p_14)) , 2UL)))) ^ g_92.f1), g_92.f1)), l_272)) , 0xF2L) | p_12))) || 0x77L) ^ 7UL) > l_164) == p_13), l_61.f0)), l_250)));
            if ((safe_add_func_uint8_t_u_u((l_182[2][1] != (l_132[1][2] = g_237)), (l_130 = g_131[1][0]))))
            { 
                int32_t l_275 = 0L;
                return l_275;
            }
            else
            { 
                uint32_t l_278 = 1UL;
                l_291 ^= (((safe_mul_func_uint8_t_u_u(l_278, ((safe_unary_minus_func_int32_t_s(l_280)) <= ((safe_mul_func_uint8_t_u_u((++g_62), ((safe_lshift_func_int8_t_s_s(0x6AL, (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(7UL, 0x2FEDL)), 6)))) >= p_12))) == p_12)))) , p_13) == l_278);
            }
        }
        else
        { 
            uint16_t l_307 = 0x5B59L;
            int32_t l_308[5] = {1L,1L,1L,1L,1L};
            int16_t l_310 = 0x9DC4L;
            uint32_t l_312 = 1UL;
            int i;
            g_22 = (g_133[1][0][4] = (l_308[2] = ((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u((l_182[1][0] = (safe_rshift_func_uint8_t_u_u(0x0FL, 0))), 5)) == (safe_div_func_int32_t_s_s((-1L), (safe_mul_func_uint8_t_u_u(p_12, (((safe_unary_minus_func_uint8_t_u(l_61.f3)) < p_12) || l_307)))))), 0x8B2F7F30CB5C31CDLL)), g_131[2][0])), l_307)) | p_14)));
            l_312++;
        }
    }
    return g_190;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_92.f3, "g_92.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_93[i][j][k], "g_93[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_131[i][j], "g_131[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_133[i][j][k], "g_133[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_252[i], "g_252[i]", print_hash_value);

    }
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_758.f0, "g_758.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
