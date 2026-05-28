// SPDX-License-Identifier: MIT
// cctest_csmith_55315a89.c --- cctest case csmith_55315a89 (csmith seed 1429297801)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf32890a7 */
/* @exp_ticks 0x3672 */

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

// Options:   -s 1429297801 -o /tmp/csmith_gen_s_hd_m_i/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint16_t  f1;
   int32_t  f2;
   int8_t  f3;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   const int32_t  f3;
   const uint8_t  f4;
   int32_t  f5;
};

union U2 {
   const int64_t  f0;
};


static int32_t g_6[2] = {0xFC9A57B5L,0xFC9A57B5L};
static const union U2 g_21[3] = {{-6L},{-6L},{-6L}};
static uint64_t g_38[1] = {0x11140AE7762969FBLL};
static uint32_t g_39[3] = {0x6B9EC499L,0x6B9EC499L,0x6B9EC499L};
static struct S1 g_44 = {0xA6575E0AL,0UL,-1L,0x6B862B33L,247UL,0L};
static uint32_t g_69 = 0UL;
static uint32_t g_77 = 18446744073709551615UL;
static int8_t g_98 = 0x0DL;
static uint8_t g_140 = 8UL;
static uint16_t g_141 = 0x80AAL;
static int32_t g_144 = 0xB71B8916L;
static struct S0 g_155 = {1L,1UL,1L,0xFEL};
static uint32_t g_160 = 0x01A31D27L;



static int32_t  func_1(void);
static int8_t  func_2(uint16_t  p_3, uint32_t  p_4);
static union U2  func_12(union U2  p_13);
static union U2  func_14(uint16_t  p_15, int8_t  p_16, union U2  p_17);




static int32_t  func_1(void)
{ 
    int32_t l_9 = 0x401D1B98L;
    if ((((func_2(((+g_6[1]) <= (safe_rshift_func_int8_t_s_u(((l_9 , l_9) < ((((safe_add_func_int64_t_s_s(0xACD7D393E75CB554LL, g_6[0])) & g_6[1]) || l_9) & l_9)), 6))), l_9) || 0x8FL) <= 1UL) != g_98))
    { 
        struct S0 l_154 = {0x7B35L,1UL,0x596EFE92L,3L};
        g_155 = l_154;
    }
    else
    { 
        int64_t l_156 = 0x2912ABF0990B5A70LL;
        int32_t l_157 = 0xC2221820L;
        l_157 |= (l_156 != g_155.f3);
        g_44.f5 = ((((g_39[2] | l_9) && (safe_mod_func_int32_t_s_s((l_9 , (g_6[1] = 0x53C716A1L)), g_160))) && l_9) , l_9);
    }
    return l_9;
}



static int8_t  func_2(uint16_t  p_3, uint32_t  p_4)
{ 
    int8_t l_23 = 0L;
    int32_t l_83 = 7L;
    int32_t l_84 = (-5L);
    int32_t l_91 = (-1L);
    int32_t l_93 = 0L;
    int32_t l_94 = 0x611A59CBL;
    int32_t l_110 = 0x83B75A47L;
    int32_t l_113 = 1L;
    int32_t l_114 = 0x80421A51L;
    int32_t l_118 = (-2L);
    struct S0 l_123 = {0x03A9L,65535UL,0x308392A3L,0xF0L};
    const uint8_t l_142[2][1][5] = {{{0x39L,0x39L,0x39L,0x39L,0x39L}},{{0xCDL,0xCDL,0xCDL,0xCDL,0xCDL}}};
    int i, j, k;
    for (p_3 = 0; (p_3 <= 1); p_3 += 1)
    { 
        int8_t l_88 = 1L;
        int32_t l_90 = 0L;
        int32_t l_95 = 1L;
        int32_t l_97 = 0x3A4B37CAL;
        int32_t l_103 = 0x32669E62L;
        int32_t l_104 = 1L;
        int32_t l_105 = (-1L);
        int32_t l_106 = (-5L);
        int32_t l_111[3][1][1];
        uint32_t l_119 = 18446744073709551615UL;
        uint16_t l_124 = 65535UL;
        struct S1 l_153[4][5] = {{{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L}},{{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L}},{{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L}},{{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L},{8L,0x34CF679B517F45F4LL,0x03D5EB93L,0xA2B8C224L,0x53L,-9L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_111[i][j][k] = 0x3AF947C6L;
            }
        }
        for (p_4 = 0; (p_4 <= 1); p_4 += 1)
        { 
            int32_t l_22 = 0x81D68C2AL;
            int32_t l_99 = 0x335DC65FL;
            int32_t l_101 = 0x138347E9L;
            int32_t l_102 = 0xCB4AB470L;
            int32_t l_107 = 0xCF3CB913L;
            int32_t l_108 = 7L;
            int32_t l_109 = (-1L);
            int32_t l_112 = 0xD24B411FL;
            int32_t l_115 = (-10L);
            int32_t l_116 = (-7L);
            int32_t l_117 = (-1L);
            int i;
            if ((func_12(func_14(((safe_div_func_int16_t_s_s(((g_6[p_4] <= (((~g_6[1]) & (0x1718BC698DC509CALL != (l_22 |= ((g_21[0] , 0x7B187B35F19716E2LL) & p_4)))) != l_23)) ^ 0xA8L), 0x7673L)) > g_6[1]), p_4, g_21[0])) , 0x07748211L))
            { 
                int32_t l_81 = 0L;
                int32_t l_82 = (-1L);
                int32_t l_85 = 0xC8DDEC24L;
                int32_t l_86 = 0x5B30FD8BL;
                int32_t l_87 = 0x4744A690L;
                int32_t l_89 = 0xB09A55A0L;
                int32_t l_92 = 0x7C424A88L;
                int32_t l_96 = 1L;
                int32_t l_100[5] = {0xA9C7313BL,0xA9C7313BL,0xA9C7313BL,0xA9C7313BL,0xA9C7313BL};
                int i;
                --l_119;
                if (p_3)
                    break;
                if (p_3)
                    break;
            }
            else
            { 
                struct S0 l_122 = {0x790EL,0x0E3AL,-1L,0x7EL};
                if (l_104)
                    break;
                l_123 = l_122;
            }
        }
        l_104 |= (-1L);
        for (l_123.f3 = 2; (l_123.f3 >= 0); l_123.f3 -= 1)
        { 
            int32_t l_143 = 0L;
            int i;
            g_144 = ((l_124 ^= g_39[l_123.f3]) & (!(safe_div_func_int64_t_s_s((((l_143 &= ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(((g_44.f4 || (0x1EL == (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((g_141 = (g_140 = p_3)) == g_39[l_123.f3]) <= g_44.f0), l_142[1][0][4])) ^ l_111[0][0][0]), l_95)))) < l_123.f0), 15)) , p_3), l_95)), 7)) || 0x16F8L)) & p_4) , g_144), g_39[2]))));
            if (((safe_lshift_func_int16_t_s_u((+((+(l_124 , (g_44.f0 ^ p_3))) || (g_38[0] = (safe_mod_func_uint16_t_u_u((l_153[1][1] , p_3), 1L))))), 10)) < p_4))
            { 
                return l_143;
            }
            else
            { 
                l_95 ^= g_44.f1;
                return l_104;
            }
        }
    }
    return g_38[0];
}



static union U2  func_12(union U2  p_13)
{ 
    uint8_t l_78 = 252UL;
    int32_t l_79 = 0x30343879L;
    union U2 l_80 = {9L};
    for (g_44.f5 = 0; (g_44.f5 <= 1); g_44.f5 += 1)
    { 
        int i;
        l_79 = ((g_6[g_44.f5] <= (p_13.f0 >= (p_13.f0 >= ((l_78 = (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_77, p_13.f0)), p_13.f0))) == 4UL)))) & p_13.f0);
    }
    return l_80;
}



static union U2  func_14(uint16_t  p_15, int8_t  p_16, union U2  p_17)
{ 
    int16_t l_29 = 0xDBF1L;
    int32_t l_36 = (-1L);
    int32_t l_37 = 6L;
    int32_t l_40 = 0xCC907F7AL;
    uint8_t l_68[3];
    union U2 l_72[1] = {{1L}};
    int i;
    for (i = 0; i < 3; i++)
        l_68[i] = 253UL;
    for (p_15 = (-6); (p_15 <= 40); p_15 = safe_add_func_uint8_t_u_u(p_15, 3))
    { 
        union U2 l_28 = {-6L};
        struct S0 l_41 = {0x8A80L,0x46BFL,0x21DABEE0L,-2L};
        int32_t l_47 = 0x452C7957L;
        l_40 ^= (g_6[0] >= ((safe_mul_func_uint8_t_u_u((l_29 ^= (l_28 , 5UL)), (((g_39[2] ^= ((g_38[0] &= (safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((l_36 = (safe_sub_func_uint8_t_u_u(l_36, l_36))), l_37)) & 0UL) < g_6[1]), g_21[0].f0))) || 0x94D85D5FCA44BAB9LL)) > l_28.f0) , g_39[2]))) ^ g_21[0].f0));
        l_47 |= (l_41 , ((safe_mul_func_uint16_t_u_u(l_37, (g_44 , ((((safe_mul_func_uint64_t_u_u(g_38[0], 0UL)) < 0x0DL) >= 0x93C4D9805F634C5DLL) , l_28.f0)))) < p_17.f0));
        for (g_44.f0 = (-14); (g_44.f0 != (-22)); g_44.f0--)
        { 
            int16_t l_52 = 9L;
            for (l_47 = (-12); (l_47 != (-17)); --l_47)
            { 
                uint64_t l_61 = 18446744073709551615UL;
                if (l_52)
                    break;
                if (g_21[0].f0)
                    continue;
                g_44.f5 ^= ((l_52 >= (l_40 = ((safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((0x27FA2E55FDCF91F6LL == (safe_div_func_uint16_t_u_u((p_17.f0 && ((safe_div_func_uint32_t_u_u(((((0xAAL >= g_6[1]) || l_61) < g_38[0]) != p_16), 0x44896B3CL)) == l_52)), 65535UL))), p_17.f0)), g_44.f1)) , l_47))) <= g_6[1]);
            }
        }
    }
    g_6[0] |= g_44.f0;
    l_40 = (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((255UL != p_16), (g_69 = (l_37 = (l_68[0] = 255UL))))) | (((((safe_lshift_func_uint8_t_u_s(((0x63E176CBFBCC8317LL > g_44.f2) > p_15), 2)) , p_15) != 0x47L) && l_36) <= g_44.f4)), 4)), l_29));
    return l_72[0];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_21[i].f0, "g_21[i].f0", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_39[i], "g_39[i]", print_hash_value);

    }
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_44.f1, "g_44.f1", print_hash_value);
    transparent_crc(g_44.f2, "g_44.f2", print_hash_value);
    transparent_crc(g_44.f3, "g_44.f3", print_hash_value);
    transparent_crc(g_44.f4, "g_44.f4", print_hash_value);
    transparent_crc(g_44.f5, "g_44.f5", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f1, "g_155.f1", print_hash_value);
    transparent_crc(g_155.f2, "g_155.f2", print_hash_value);
    transparent_crc(g_155.f3, "g_155.f3", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
