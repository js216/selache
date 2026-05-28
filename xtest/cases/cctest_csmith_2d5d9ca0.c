// SPDX-License-Identifier: MIT
// cctest_csmith_2d5d9ca0.c --- cctest case csmith_2d5d9ca0 (csmith seed 761109664)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x31a6ebb8 */
/* @exp_ticks 0x320a */

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

// Options:   -s 761109664 -o /tmp/csmith_gen_9aw65epv/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   const struct S0  f1;
   const int8_t  f2;
};

union U2 {
   struct S0  f0;
   int32_t  f1;
};


static int16_t g_10 = 0L;
static union U1 g_11 = {1UL};
static uint8_t g_46[1] = {0xD7L};
static uint64_t g_63 = 9UL;
static int32_t g_79 = 0x55642E06L;
static int32_t g_80 = 0xD079270DL;
static int32_t g_81 = (-1L);
static uint32_t g_82 = 4294967295UL;
static union U2 g_94 = {{0L}};
static int32_t g_144 = 1L;
static int8_t g_157 = 0x8EL;
static int8_t g_207 = (-5L);
static uint32_t g_208 = 0x177B4B0EL;



static struct S0  func_1(void);
static int32_t  func_4(int32_t  p_5, union U1  p_6, int32_t  p_7, uint8_t  p_8, const union U1  p_9);
static uint16_t  func_22(int8_t  p_23);
static struct S0  func_34(int32_t  p_35, union U1  p_36, int16_t  p_37, uint8_t  p_38, uint32_t  p_39);




static struct S0  func_1(void)
{ 
    uint64_t l_2 = 18446744073709551613UL;
    int32_t l_3 = 0xD6804445L;
    const uint32_t l_12 = 0x0C4307E4L;
    const union U1 l_13 = {0x013D0BB9L};
    struct S0 l_216 = {1L};
    g_79 = ((l_3 = (l_2 = 0xAEL)) < (((func_4(g_10, g_11, (l_12 | 0x611BC383C67EE39FLL), l_12, l_13) , l_13.f0) ^ (-1L)) || 0x0AC000487FC37884LL));
    return l_216;
}



static int32_t  func_4(int32_t  p_5, union U1  p_6, int32_t  p_7, uint8_t  p_8, const union U1  p_9)
{ 
    uint16_t l_14 = 0x5FFFL;
    int32_t l_26 = 0L;
    uint64_t l_27[4];
    union U2 l_60 = {{0xC01CF56EL}};
    int32_t l_113 = 0x39EBDDF9L;
    uint32_t l_139 = 2UL;
    int32_t l_162[5];
    int i;
    for (i = 0; i < 4; i++)
        l_27[i] = 0x3F30B91EE4CFF15CLL;
    for (i = 0; i < 5; i++)
        l_162[i] = (-1L);
    l_14++;
lbl_77:
    if ((p_5 &= (safe_div_func_int16_t_s_s((l_26 = (safe_div_func_int16_t_s_s((!func_22(g_11.f0)), (safe_rshift_func_int8_t_s_u(0x1FL, func_22(g_11.f0)))))), l_14))))
    { 
        int16_t l_45[4][4][3] = {{{(-7L),7L,0x8C84L},{(-7L),(-7L),0xDC4BL},{6L,7L,0xDC4BL},{7L,0x56A7L,0x8C84L}},{{6L,0x56A7L,0x2695L},{(-7L),7L,0x8C84L},{(-7L),(-7L),0xDC4BL},{6L,7L,0xDC4BL}},{{7L,0x56A7L,0x8C84L},{6L,0x56A7L,0x2695L},{(-7L),7L,0x8C84L},{(-7L),(-7L),0xDC4BL}},{{6L,7L,0xDC4BL},{7L,0x56A7L,0x8C84L},{6L,0x56A7L,0x2695L},{0x2F52L,(-2L),0x56A7L}}};
        int32_t l_52 = 0L;
        int i, j, k;
        for (l_14 = 0; l_14 < 4; l_14 += 1)
        {
            l_27[l_14] = 18446744073709551607UL;
        }
        for (l_14 = 0; (l_14 <= 3); l_14 += 1)
        { 
            int16_t l_40 = (-4L);
            g_46[0] = (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((((safe_sub_func_int64_t_s_s((func_34(l_40, p_9, g_11.f1.f0, (l_26 = 0xC9L), g_11.f2) , l_45[1][0][1]), p_6.f0)) && l_14) || g_11.f0), p_8)), 7));
        }
        p_5 = (safe_mul_func_int16_t_s_s((g_11.f0 && (safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint32_t_u_u((l_45[1][0][1] || (g_11.f1.f0 < (((l_52 = p_9.f1.f0) , 0x33L) >= 0xA8L))), p_9.f0)) | l_14)))), 0xA0F0L));
        if (p_9.f0)
            goto lbl_77;
    }
    else
    { 
        union U2 l_53 = {{0x8CA18188L}};
        int32_t l_70 = (-10L);
        if (((((l_53 , g_11.f2) & l_26) || l_27[1]) | 0xA0BDEC7E1EFC39FALL))
        { 
            for (p_7 = 0; (p_7 <= 0); p_7 += 1)
            { 
                int i;
                if (l_27[(p_7 + 2)])
                    break;
                p_5 = (g_63 = (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((-1L) || (((l_27[(p_7 + 2)] = ((l_60 , g_46[p_7]) > ((((safe_div_func_int32_t_s_s((l_60.f1 & 5L), l_53.f1)) | p_9.f1.f0) , g_46[p_7]) == p_9.f2))) , p_9.f1.f0) ^ g_10)), 0x41158A35CCC4EFF4LL)), (-1L))), g_46[p_7])));
            }
            return p_6.f0;
        }
        else
        { 
            uint64_t l_75 = 0x17F16C3B14A51E29LL;
            int32_t l_76[2];
            int i;
            for (i = 0; i < 2; i++)
                l_76[i] = 0xF0774A76L;
            if ((p_5 = ((l_53.f0.f0 == l_53.f1) > (((l_76[1] ^= ((safe_mul_func_uint8_t_u_u(((g_10 > ((safe_div_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((++g_46[0]) > (l_70 = (((safe_sub_func_int32_t_s_s(l_75, g_11.f0)) , p_9.f1.f0) == l_70))), p_7)) && g_46[0]), g_10)) != 0x4C0A206EL)) | g_10), g_11.f1.f0)) ^ g_10)) && 2L) == 65535UL))))
            { 
                return g_11.f2;
            }
            else
            { 
                return p_6.f0;
            }
        }
    }
    if ((l_26 = g_11.f0))
    { 
        int16_t l_78 = 0xFB2EL;
        int32_t l_85 = 0xB9CEB518L;
        --g_82;
        l_85 ^= 0x12828081L;
    }
    else
    { 
        int32_t l_100 = 1L;
        int32_t l_163[4][1][1] = {{{4L}},{{2L}},{{4L}},{{2L}}};
        union U2 l_192 = {{0x4D00042AL}};
        int8_t l_215[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_215[i] = (-1L);
        for (g_81 = 0; (g_81 < 22); g_81 = safe_add_func_int64_t_s_s(g_81, 5))
        { 
            const int32_t l_99 = 0xB33E7469L;
            int32_t l_111 = 0L;
            int32_t l_205 = 0x573C08D3L;
            if ((safe_rshift_func_int16_t_s_s(p_6.f2, (((safe_add_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u((g_94 , ((safe_rshift_func_uint8_t_u_u((((g_79 || (safe_lshift_func_int16_t_s_u(g_80, g_46[0]))) , l_99) | p_6.f2), 2)) , p_9.f0)), 4)) == p_9.f0) != g_79) ^ l_100), 0UL)) ^ g_79) > l_99))))
            { 
                if (g_46[0])
                    break;
                return g_63;
            }
            else
            { 
                int16_t l_112 = 0xF163L;
                int32_t l_145[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_145[i] = (-1L);
                l_113 ^= ((safe_div_func_uint64_t_u_u((((((g_46[0] = (((safe_sub_func_int64_t_s_s(((((0xD1L & p_9.f0) , (l_111 = ((l_26 ^= ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u((l_99 ^ 4294967294UL), g_79)) , 0xE5CCA7CC927B072BLL) >= 0x1E5BAC90574D2646LL) || l_99), p_9.f0)) , l_60.f0.f0), 0xF5L)) >= g_94.f0.f0)) == 0x2FC4CEA799ADA34CLL))) < 0x65D98765L) , g_80), 2L)) , 0xF9L) != l_112)) & g_81) && 0xCAL) || l_111) & 0x91D6L), p_5)) , l_60.f0.f0);
                if (l_112)
                    break;
                g_80 = (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(l_14, (safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u((g_46[0] = (safe_lshift_func_int8_t_s_s(((((l_145[0] = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((g_10 <= (safe_add_func_uint64_t_u_u((p_6.f2 || ((((l_26 = ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_139--) && (safe_add_func_int64_t_s_s(g_11.f0, p_6.f2))), l_112)), p_9.f0)) <= l_100)) , l_99) , l_112) || 18446744073709551615UL)), g_80))) ^ 0x7F50L), p_9.f0)), 0)), g_144))) > p_8) < 18446744073709551612UL) && 0x0FF389711EE9290BLL), g_80))), 6)))))), 10)) == l_112), p_6.f0)) , 0x5BB3L), g_10));
            }
            p_5 = (p_9.f2 > (safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((!(l_111 = (((g_157 = p_8) >= ((safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((g_46[0]--), ((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x9DE9L, (0UL || g_11.f1.f0))), 0x310AL)) < p_9.f1.f0))) > g_94.f0.f0), 0x1FD5L)) != l_100)) ^ 0UL))), l_99)), l_99)), 0xFAE3L)) < 0x6CD9D43CF306C016LL), 7)) || p_5), p_7)));
            if ((func_34(l_163[3][0][0], p_9, g_94.f0.f0, (safe_mod_func_uint32_t_u_u((g_11.f0 ^= (p_6.f0 |= (safe_sub_func_int8_t_s_s(l_163[3][0][0], (-10L))))), p_7)), p_7) , p_8))
            { 
                int32_t l_190 = 0xAE1E1C95L;
                int32_t l_191 = 0x6ED31E0CL;
                p_5 = (safe_sub_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(0L, (safe_add_func_uint32_t_u_u((p_7 >= (safe_mod_func_uint8_t_u_u((((g_11.f2 != (safe_lshift_func_uint8_t_u_u((g_46[0] = ((l_190 = ((safe_rshift_func_uint16_t_u_u(l_14, 8)) != l_111)) && p_5)), g_10))) != p_9.f1.f0) | p_6.f1.f0), (-1L)))), l_191)))) <= 0xCF9FCAADL), 0xEDD9E1A7L)), 0x0CDC420A7EECA001LL)) & l_111), p_6.f1.f0));
                if (p_6.f1.f0)
                    continue;
            }
            else
            { 
                uint32_t l_203[2];
                int32_t l_204 = 1L;
                int32_t l_206 = 0x16036A63L;
                int i;
                for (i = 0; i < 2; i++)
                    l_203[i] = 0xE1560B61L;
                l_203[0] &= (p_9.f0 , (l_192 , ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((l_111 = (((--p_6.f0) , 6L) > ((safe_mul_func_int16_t_s_s((p_9.f2 != p_9.f0), 0x41A0L)) >= g_94.f0.f0))) | l_60.f1), 9)) != p_5), p_8)), 9)) >= p_5)));
                if (g_79)
                    continue;
                g_208++;
            }
        }
        p_5 = ((l_100 = l_163[3][0][0]) == (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(0x4932L, ((l_26 = l_215[1]) < l_192.f0.f0))) >= g_46[0]), p_6.f2)));
    }
    return g_81;
}



static uint16_t  func_22(int8_t  p_23)
{ 
    return g_11.f0;
}



static struct S0  func_34(int32_t  p_35, union U1  p_36, int16_t  p_37, uint8_t  p_38, uint32_t  p_39)
{ 
    uint64_t l_43 = 0xDE905F4D0C653DDBLL;
    uint32_t l_44[4][4][2];
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
                l_44[i][j][k] = 7UL;
        }
    }
    p_35 = (g_11.f2 > ((safe_mod_func_int32_t_s_s(((l_43 < 5UL) & p_36.f1.f0), l_44[1][1][1])) <= 0xF5L));
    return p_36.f1;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1.f0, "g_11.f1.f0", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_94.f0.f0, "g_94.f0.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
