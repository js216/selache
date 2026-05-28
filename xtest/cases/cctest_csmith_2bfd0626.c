// SPDX-License-Identifier: MIT
// cctest_csmith_2bfd0626.c --- cctest case csmith_2bfd0626 (csmith seed 738002470)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x97dfc68e */
/* @exp_ticks 0x6373 */

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

// Options:   -s 738002470 -o /tmp/csmith_gen_9dyz16j7/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   int16_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

struct S1 {
   int8_t  f0;
   uint8_t  f1;
   int8_t  f2;
};

struct S2 {
   const uint32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
};

union U3 {
   uint32_t  f0;
};


static int32_t g_3 = 0xD19AC196L;
static uint32_t g_7 = 0x50B5F0B1L;
static uint16_t g_31 = 0UL;
static uint16_t g_61[4][5][4] = {{{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L}},{{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L}},{{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L}},{{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L},{0xC132L,0xC7BCL,0xC7BCL,0xC132L}}};
static uint64_t g_66 = 0x41BD8E7029BB2D3FLL;
static int32_t g_74 = (-8L);
static union U3 g_89 = {0UL};
static int32_t g_96 = 5L;
static uint8_t g_106 = 2UL;
static int16_t g_121 = 7L;
static uint32_t g_127 = 18446744073709551615UL;
static int16_t g_135 = (-2L);
static struct S1 g_137 = {8L,255UL,-1L};
static int64_t g_144 = 0L;
static int32_t *g_152[2] = {(void*)0,(void*)0};
static int32_t **g_151 = &g_152[1];
static int32_t g_181 = 0x9D00B73EL;
static struct S0 *g_184 = (void*)0;
static struct S0 g_188 = {-4L,0xCB64CFAAL,7L,0xF25517FAL};
static struct S1 g_226 = {0x3FL,0x97L,-3L};
static struct S1 *g_225 = &g_226;
static int32_t *g_288 = (void*)0;
static struct S0 **g_289 = &g_184;
static struct S1 ***g_412 = (void*)0;
static union U3 *g_446[2] = {&g_89,&g_89};
static struct S2 g_469 = {4294967295UL,18446744073709551613UL,0x7837FA24L};
static struct S2 g_482 = {0x50330CD3L,0x8D9628E17E25F3A3LL,0xB4BB5807L};
static const union U3 *g_545 = (void*)0;
static const union U3 **g_544 = &g_545;
static const union U3 ***g_543 = &g_544;
static int8_t g_562 = 0x6DL;
static int16_t g_577 = 0x66E4L;
static uint16_t *g_660 = &g_61[1][2][1];
static union U3 **g_735[4][4] = {{&g_446[1],&g_446[1],&g_446[1],&g_446[1]},{&g_446[1],&g_446[1],&g_446[1],(void*)0},{&g_446[1],&g_446[1],&g_446[1],&g_446[1]},{&g_446[1],(void*)0,&g_446[1],&g_446[1]}};
static union U3 ***g_734 = &g_735[0][2];
static union U3 *** const *g_733 = &g_734;
static int64_t g_738 = 0x054F7EDE89F95039LL;
static int8_t g_806 = 0x6FL;
static uint64_t g_809 = 0x39A49AF5E2763927LL;
static int64_t *g_843[1] = {&g_144};
static int64_t **g_842 = &g_843[0];
static int16_t g_913[6][3] = {{0x6F88L,0xA0CCL,0xA0CCL},{(-1L),1L,1L},{0x6F88L,0xA0CCL,0xA0CCL},{(-1L),1L,1L},{0x6F88L,0xA0CCL,0xA0CCL},{(-1L),1L,1L}};
static int32_t g_1009[3][2][6] = {{{(-5L),0x179232C1L,3L,0x179232C1L,(-5L),0x0B873956L},{0xF0DB7150L,0x0B873956L,(-1L),(-5L),0L,0xE2C29314L}},{{0L,0x8993BD8FL,0L,0x0B873956L,0xE2C29314L,0xE2C29314L},{(-1L),(-1L),(-1L),(-1L),0x1133B107L,0x0B873956L}},{{0xE2C29314L,0xC81A9500L,3L,1L,0x179232C1L,0L},{3L,0L,(-8L),0x8993BD8FL,0x179232C1L,0x8993BD8FL}}};
static uint8_t g_1015 = 1UL;
static struct S0 *g_1027 = &g_188;
static struct S1 **g_1061 = &g_225;
static int8_t * const *g_1093[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_1094 = 0xC92F82E3L;
static union U3 * const * const *g_1105 = (void*)0;
static union U3 * const * const **g_1104[4] = {&g_1105,&g_1105,&g_1105,&g_1105};
static union U3 * const * const ***g_1103 = &g_1104[1];
static struct S2 *g_1109 = &g_482;
static struct S2 **g_1108 = &g_1109;
static struct S0 g_1271 = {8L,0xEF608E08L,0x7F02L,0x052779E9L};
static int64_t g_1330 = (-1L);
static struct S1 g_1412 = {-3L,251UL,0x1FL};
static struct S2 ***g_1511 = &g_1108;
static uint32_t g_1542 = 18446744073709551615UL;
static uint32_t g_1597 = 5UL;
static uint64_t **g_1621 = (void*)0;



static union U3  func_1(void);
static int32_t * func_14(int32_t  p_15, int32_t  p_16, int32_t * p_17);
static struct S0  func_18(struct S2  p_19, int8_t  p_20, int32_t * p_21, int32_t * p_22);
static struct S1  func_23(int32_t * p_24, int32_t * p_25);
static int32_t * func_26(struct S0  p_27);
static uint64_t  func_39(int32_t * p_40, struct S0  p_41, const uint32_t  p_42, const uint32_t  p_43, union U3  p_44);
static int32_t  func_45(const int32_t * p_46);
static struct S0  func_48(uint16_t  p_49, int32_t  p_50);




static union U3  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5 = &g_3;
    int32_t *l_6[2][5] = {{&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3}};
    const union U3 *l_1709 = &g_89;
    uint16_t l_1714 = 65526UL;
    int i, j;
    g_7--;
    for (g_3 = (-2); (g_3 != 1); ++g_3)
    { 
        struct S0 l_28 = {0x89B467BB1A88AF16LL,18446744073709551608UL,0L,0xAE5D5EC7L};
        int32_t *l_1686 = &g_3;
        int32_t l_1704[6];
        union U3 l_1712[1][6] = {{{1UL},{0xCF766147L},{1UL},{1UL},{0xCF766147L},{1UL}}};
        int64_t l_1713[6][6][4] = {{{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L}},{{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L}},{{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L}},{{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L}},{{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L}},{{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L},{6L,0L,0L,6L},{0x76941ED5D6A9368FLL,0L,2L,6L}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1704[i] = 0xA77E4FA3L;
        for (g_7 = 0; (g_7 == 45); g_7 = safe_add_func_int16_t_s_s(g_7, 8))
        { 
            uint8_t *l_1014 = &g_1015;
            int32_t *l_1016 = (void*)0;
            int32_t **l_1689 = &l_5;
            int16_t *l_1699 = &g_1271.f2;
            int16_t *l_1702[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t l_1703[1][2][1];
            int32_t l_1705 = 0x6051BE65L;
            uint8_t l_1706 = 0xA2L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1703[i][j][k] = 0xED12CB2F613EE3F3LL;
                }
            }
        }
        if ((*l_1686))
            continue;
        (*g_544) = l_1709;
        for (g_144 = (-13); (g_144 > (-11)); g_144 = safe_add_func_uint32_t_u_u(g_144, 1))
        { 
            return l_1712[0][4];
        }
        l_1714++;
    }
    return (*l_1709);
}



static int32_t * func_14(int32_t  p_15, int32_t  p_16, int32_t * p_17)
{ 
    uint32_t l_1687 = 0UL;
    int32_t *l_1688[7] = {&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96};
    int i;
    l_1687 &= (*p_17);
    return l_1688[6];
}



static struct S0  func_18(struct S2  p_19, int8_t  p_20, int32_t * p_21, int32_t * p_22)
{ 
    uint64_t *l_1019 = &g_66;
    struct S0 *l_1020 = &g_188;
    struct S0 **l_1021 = (void*)0;
    struct S0 **l_1022 = (void*)0;
    struct S0 **l_1023 = (void*)0;
    struct S0 **l_1024 = &g_184;
    struct S0 **l_1025 = &g_184;
    struct S0 **l_1026[1];
    uint8_t *l_1031 = &g_1015;
    int32_t l_1032 = 0xDAEEA893L;
    uint8_t l_1068 = 9UL;
    struct S2 *l_1070[7][1];
    struct S2 **l_1069 = &l_1070[3][0];
    int32_t l_1084 = 0xA6ADAE59L;
    uint32_t l_1096[6] = {0xBC6ABF3EL,0xBC6ABF3EL,0xBC6ABF3EL,0xBC6ABF3EL,0xBC6ABF3EL,0xBC6ABF3EL};
    int32_t l_1156[1][2][1];
    int8_t l_1172[3];
    struct S1 *l_1236[7][3][4] = {{{&g_137,&g_226,(void*)0,&g_137},{&g_226,&g_137,&g_226,(void*)0},{&g_137,(void*)0,&g_137,(void*)0}},{{&g_137,(void*)0,(void*)0,&g_226},{(void*)0,&g_226,&g_226,(void*)0},{&g_226,&g_137,&g_226,&g_137}},{{(void*)0,&g_226,(void*)0,(void*)0},{&g_137,&g_137,&g_137,&g_137},{&g_137,&g_137,&g_226,&g_226}},{{&g_226,(void*)0,(void*)0,&g_226},{&g_137,&g_226,(void*)0,&g_226},{&g_226,(void*)0,&g_226,&g_226}},{{(void*)0,&g_137,&g_137,&g_137},{(void*)0,&g_137,(void*)0,(void*)0},{&g_137,&g_226,&g_137,&g_137}},{{&g_226,&g_137,(void*)0,(void*)0},{&g_226,&g_226,&g_137,&g_226},{&g_137,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_137,(void*)0},{(void*)0,&g_137,&g_226,&g_137},{&g_226,&g_226,(void*)0,&g_226}}};
    int16_t *l_1237[4];
    uint16_t l_1248 = 1UL;
    int16_t *l_1264 = &g_121;
    int32_t *l_1284[7][1][7] = {{{&l_1156[0][0][0],&l_1032,&g_3,&l_1156[0][0][0],&g_1009[0][1][0],&l_1156[0][0][0],&g_1009[0][1][0]}},{{&l_1156[0][0][0],(void*)0,(void*)0,&l_1156[0][0][0],&g_3,&g_3,&g_1009[0][1][0]}},{{&g_1009[0][1][0],&l_1032,(void*)0,&g_1009[0][1][0],&g_1009[0][1][0],&g_3,&g_3}},{{&l_1156[0][0][0],&l_1032,&g_3,&l_1156[0][0][0],&g_1009[0][1][0],&l_1156[0][0][0],&g_1009[0][1][0]}},{{&l_1156[0][0][0],(void*)0,(void*)0,&l_1156[0][0][0],&g_3,&g_3,&g_1009[0][1][0]}},{{&g_1009[0][1][0],&l_1032,(void*)0,&g_1009[0][1][0],&g_1009[0][1][0],&g_3,&g_3}},{{&l_1156[0][0][0],&l_1032,&g_3,&l_1156[0][0][0],&g_1009[0][1][0],&l_1156[0][0][0],&g_1009[0][1][0]}}};
    int64_t ***l_1289 = &g_842;
    const union U3 *l_1350 = (void*)0;
    int32_t *l_1356 = (void*)0;
    uint16_t l_1396 = 0xA823L;
    union U3 l_1422 = {0xB51646B2L};
    uint16_t **l_1436[5] = {&g_660,&g_660,&g_660,&g_660,&g_660};
    uint32_t l_1437 = 1UL;
    union U3 l_1449 = {0x4DE5D588L};
    int32_t l_1525 = (-1L);
    int8_t l_1527 = 0x2EL;
    uint32_t *l_1548 = (void*)0;
    uint32_t **l_1547[6] = {&l_1548,&l_1548,(void*)0,&l_1548,&l_1548,(void*)0};
    struct S0 *l_1590 = &g_1271;
    uint8_t l_1632 = 0UL;
    uint8_t l_1637 = 0x5DL;
    uint64_t *l_1657[1];
    struct S1 l_1673 = {0x70L,0xF5L,0xA7L};
    struct S1 l_1674[3] = {{-8L,250UL,0x8AL},{-8L,250UL,0x8AL},{-8L,250UL,0x8AL}};
    int32_t l_1675 = 0x90D4EC90L;
    uint32_t l_1676 = 18446744073709551615UL;
    uint32_t *l_1681 = &l_1449.f0;
    uint32_t *l_1682[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t l_1683[5] = {0xB9E570B088248C1ELL,0xB9E570B088248C1ELL,0xB9E570B088248C1ELL,0xB9E570B088248C1ELL,0xB9E570B088248C1ELL};
    uint8_t l_1684 = 254UL;
    uint8_t l_1685[4][3][7] = {{{7UL,3UL,3UL,7UL,0UL,0x37L,1UL},{255UL,0x11L,1UL,0x49L,0x11L,255UL,247UL},{0xFAL,0x90L,0x96L,0x2DL,0x08L,0x96L,1UL}},{{0UL,247UL,255UL,0xFAL,0x49L,0x49L,0xFAL},{255UL,7UL,255UL,0UL,0x90L,1UL,3UL},{0x90L,0UL,0x96L,0x11L,1UL,0x4BL,254UL}},{{0x2DL,3UL,1UL,0x08L,0x49L,1UL,0x2DL},{0x37L,0x08L,3UL,0x49L,254UL,0x49L,3UL},{0x08L,0x08L,0x4BL,0x90L,0UL,0x96L,0x11L}},{{1UL,3UL,247UL,1UL,0UL,255UL,0x90L},{255UL,0UL,0UL,0x49L,0UL,0x37L,247UL},{0x11L,7UL,0x96L,254UL,254UL,0x96L,7UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1026[i] = (void*)0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1070[i][j] = &g_482;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1156[i][j][k] = 0x8E6A87B2L;
        }
    }
    for (i = 0; i < 3; i++)
        l_1172[i] = 0x61L;
    for (i = 0; i < 4; i++)
        l_1237[i] = &g_188.f2;
    for (i = 0; i < 1; i++)
        l_1657[i] = &g_66;
    if ((((l_1019 == l_1019) & ((&g_188 != (g_1027 = l_1020)) >= g_188.f2)) & ((safe_mul_func_int8_t_s_s((-4L), ((*l_1031) = (~(0x3094L & 1UL))))) == l_1032)))
    { 
        int64_t l_1041 = 0xFCB64A96A572BE7FLL;
        int32_t l_1053[7][6] = {{(-7L),0x8C9F83EFL,(-7L),0x8C9F83EFL,(-7L),0x8C9F83EFL},{0L,0x8C9F83EFL,0L,0x8C9F83EFL,0L,0x8C9F83EFL},{(-7L),0x8C9F83EFL,(-7L),0x8C9F83EFL,(-7L),0x8C9F83EFL},{0L,0x8C9F83EFL,0L,0x8C9F83EFL,0L,0x8C9F83EFL},{(-7L),0x8C9F83EFL,(-7L),0x8C9F83EFL,(-7L),0x8C9F83EFL},{0L,0x8C9F83EFL,0L,0x8C9F83EFL,0L,0x8C9F83EFL},{(-7L),0x8C9F83EFL,(-7L),0x8C9F83EFL,(-7L),0x8C9F83EFL}};
        struct S0 l_1072[6] = {{0xF447C000D8E9E359LL,2UL,8L,18446744073709551615UL},{0xF447C000D8E9E359LL,2UL,8L,18446744073709551615UL},{0xF447C000D8E9E359LL,2UL,8L,18446744073709551615UL},{0xF447C000D8E9E359LL,2UL,8L,18446744073709551615UL},{0xF447C000D8E9E359LL,2UL,8L,18446744073709551615UL},{0xF447C000D8E9E359LL,2UL,8L,18446744073709551615UL}};
        struct S1 l_1078[7] = {{-8L,0x20L,-3L},{0x50L,0x1EL,0L},{0x50L,0x1EL,0L},{-8L,0x20L,-3L},{0x50L,0x1EL,0L},{0x50L,0x1EL,0L},{-8L,0x20L,-3L}};
        int32_t l_1149 = 0x60AF18E5L;
        int32_t l_1151 = 0x4B284883L;
        int32_t l_1153 = 0x2CE9804DL;
        int32_t l_1155 = (-1L);
        int32_t l_1157 = 0L;
        int32_t l_1158[6][7][6] = {{{(-1L),0xCDD6C8D2L,2L,0x1D9D58C5L,0xB560FC5AL,0xA0E582C1L},{0x01690E23L,0x7D072BD1L,0L,0x53ED2811L,(-7L),0x530E45E7L},{0x02694ADAL,0x4418C36FL,7L,0x27EBAF3DL,0x73ED8DEAL,0x1D83DCE9L},{0xD087F95DL,0L,0x1EB07372L,0x0FFE7883L,0x0F9DFAC1L,1L},{0x388BADC5L,(-9L),0xCAF28C44L,0x68458A31L,0xC8F74F81L,1L},{0xE6FF3938L,5L,0xCDD6C8D2L,0xAB668955L,1L,(-10L)},{0xB560FC5AL,(-4L),0xEB60D047L,0xC8F74F81L,0L,0x0E625D14L}},{{0x25725EB7L,0xED82FBA9L,5L,7L,1L,(-1L)},{1L,0x02694ADAL,0x1D83DCE9L,0x7A85748FL,0x1D9D58C5L,0x0BA56219L},{0x8EBA886DL,0x68458A31L,1L,1L,0x68458A31L,0x8EBA886DL},{0x7A57747BL,0x53BCD563L,0x932760BFL,6L,0xC51107EDL,(-10L)},{9L,3L,1L,(-10L),0L,0L},{9L,1L,(-10L),6L,0x7423DA26L,0x648619F3L},{0x7A57747BL,0xC51107EDL,(-1L),1L,5L,(-1L)}},{{0x8EBA886DL,0xCAF28C44L,0x01690E23L,0x7A85748FL,0xF85EE61DL,0xC51107EDL},{1L,0x0E625D14L,0L,7L,(-1L),0L},{0x25725EB7L,0x0212C96DL,0x73ED8DEAL,0xC8F74F81L,1L,(-9L)},{0xB560FC5AL,(-1L),0x0CDFEDD6L,0xAB668955L,5L,(-8L)},{0xE6FF3938L,0x388BADC5L,1L,0x68458A31L,0x4418C36FL,5L},{0x388BADC5L,(-1L),(-1L),0x0FFE7883L,0x783C1575L,0xCDD6C8D2L},{0xD087F95DL,(-10L),3L,0x27EBAF3DL,0xED82FBA9L,(-2L)}},{{0x02694ADAL,0xAB668955L,0xED82FBA9L,0x53ED2811L,0xA0E582C1L,0x01690E23L},{0x01690E23L,0x73ED8DEAL,0x7D072BD1L,0x1D9D58C5L,(-10L),0xB168EA84L},{(-1L),0x783C1575L,(-4L),0x1D83DCE9L,(-1L),1L},{0x7644979EL,(-10L),(-1L),0x932760BFL,0xCAF28C44L,0x28B53378L},{0L,0xB560FC5AL,0L,0x530E45E7L,0x0DBFED81L,1L},{(-1L),2L,0xE36AB0B1L,2L,(-1L),6L},{(-1L),0x7644979EL,0xA0E582C1L,0L,1L,(-1L)}},{{1L,0x530E45E7L,0x73ED8DEAL,0xB168EA84L,0L,(-1L)},{0x0DBFED81L,0xB560FC5AL,1L,0x0FFE7883L,0x51E65D91L,1L},{0L,0xD1CF992DL,1L,(-10L),0x25725EB7L,0xA0E582C1L},{0xE36AB0B1L,(-10L),0x0212C96DL,3L,(-3L),0L},{1L,0x0BA56219L,1L,0xC51107EDL,0x0212C96DL,0xB560FC5AL},{9L,0xE36AB0B1L,0L,0xF85EE61DL,(-7L),(-4L)},{0x0BA56219L,0x1CAC581BL,0xC8F74F81L,0x0CDFEDD6L,0x82BE55B7L,5L}},{{0x02694ADAL,(-1L),0x8EBA886DL,0L,1L,0x41D6F09BL},{0L,5L,0x82BE55B7L,0xB560FC5AL,(-1L),0L},{0xA81EA865L,(-4L),(-1L),0L,0x53ED2811L,0xD1CF992DL},{(-1L),0x0E625D14L,5L,0xAB303666L,0x18332580L,0xE36AB0B1L},{2L,1L,0x7A85748FL,1L,0xE6FF3938L,(-4L)},{0x53BCD563L,1L,9L,0x0BA56219L,0x0FFE7883L,0x4418C36FL},{0xAB668955L,(-3L),0x0E625D14L,0x7A57747BL,0L,0xF85EE61DL}}};
        uint8_t l_1159 = 0x3BL;
        uint16_t l_1162 = 65535UL;
        int i, j, k;
        for (g_89.f0 = 0; (g_89.f0 <= 1); g_89.f0 += 1)
        { 
            int32_t *l_1033 = &g_74;
            struct S1 l_1040 = {0x25L,1UL,-5L};
            int32_t l_1054 = 0x46E1BE72L;
            struct S1 **l_1060 = &g_225;
            uint16_t l_1064 = 0x71E1L;
            struct S2 **l_1071 = &l_1070[6][0];
            struct S0 l_1102 = {0L,18446744073709551615UL,0x4A79L,18446744073709551610UL};
            int8_t l_1152 = 0L;
            int32_t l_1154[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1154[i] = 3L;
            p_22 = l_1033;
            for (p_19.f1 = 0; (p_19.f1 <= 1); p_19.f1 += 1)
            { 
                int8_t l_1065 = 0x14L;
            }
            if ((l_1069 != l_1071))
            { 
                if ((*p_22))
                    break;
            }
            else
            { 
                return l_1072[4];
            }
            for (g_96 = 0; (g_96 <= 0); g_96 += 1)
            { 
                union U3 l_1083 = {1UL};
                uint8_t l_1085 = 4UL;
                union U3 * const * const ***l_1106 = &g_1104[2];
                union U3 *****l_1107 = (void*)0;
                int32_t l_1134 = 0x85EBD685L;
                int32_t l_1150[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1150[i][j] = 1L;
                }
                if ((*l_1033))
                    break;
                for (g_226.f1 = 0; (g_226.f1 <= 1); g_226.f1 += 1)
                { 
                    struct S1 *l_1073 = &g_226;
                    uint32_t l_1079 = 0x76EC2CEAL;
                    int64_t *l_1080 = &g_188.f0;
                    int8_t **l_1092 = (void*)0;
                    int32_t *l_1095[5] = {&l_1032,&l_1032,&l_1032,&l_1032,&l_1032};
                    int i;
                    l_1054 &= ((*l_1033) = ((&g_226 == l_1073) <= 0xAEL));
                    (*l_1033) |= ((((0L < (safe_mul_func_uint8_t_u_u(p_19.f0, g_188.f2))) ^ (18446744073709551615UL ^ ((*l_1080) = ((*g_660) & ((safe_sub_func_uint64_t_u_u(((l_1078[4] , 2L) & 1L), g_226.f1)) , l_1079))))) || p_20) && g_226.f2);
                    l_1085 = (safe_rshift_func_int16_t_s_u(((l_1083 , (l_1032 != (-1L))) & (l_1084 = (g_226.f0 = l_1079))), 3));
                    (*l_1033) = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(p_19.f0, (safe_lshift_func_uint16_t_u_s((&g_152[0] == &g_152[1]), 10)))), (((*g_660) <= (((&g_188 != &g_188) ^ ((l_1092 != g_1093[1]) && l_1072[4].f2)) || (*l_1033))) < 0xDC94L)));
                    ++l_1096[2];
                }
                (*l_1033) = ((((((safe_lshift_func_int16_t_s_u((l_1072[4].f1 & (safe_unary_minus_func_int8_t_s(((l_1102 , (l_1106 = g_1103)) != l_1107)))), (g_1108 == (((*l_1031) ^= (l_1032 |= ((safe_mul_func_int16_t_s_s(((0xAB26EE65L & ((safe_rshift_func_uint8_t_u_s(l_1084, 3)) & p_19.f1)) , p_19.f0), l_1072[4].f3)) & p_19.f0))) , (void*)0)))) == p_19.f2) > g_7) | p_19.f2) ^ l_1072[4].f2) < l_1083.f0);
                for (g_137.f0 = 0; (g_137.f0 <= 0); g_137.f0 += 1)
                { 
                    int8_t *l_1130 = &g_137.f0;
                    int8_t *l_1132[3];
                    int8_t **l_1131 = &l_1132[2];
                    uint32_t *l_1133 = &l_1096[2];
                    uint32_t *l_1135 = (void*)0;
                    uint32_t *l_1136 = &l_1083.f0;
                    int32_t *l_1137 = &l_1054;
                    int32_t *l_1138 = &l_1032;
                    int32_t *l_1139 = (void*)0;
                    int32_t *l_1140 = &g_1009[0][1][0];
                    int32_t *l_1141 = &l_1084;
                    int32_t *l_1142 = &l_1054;
                    int32_t *l_1143 = (void*)0;
                    int32_t *l_1144 = &l_1084;
                    int32_t *l_1145 = &g_1009[1][0][3];
                    int32_t *l_1146 = &g_74;
                    int32_t *l_1147 = &g_1009[0][1][0];
                    int32_t *l_1148[6][1][4] = {{{&g_74,(void*)0,(void*)0,&g_74}},{{&g_1009[0][1][0],&l_1032,(void*)0,&g_3}},{{&g_74,&g_1009[0][1][0],&l_1054,&g_1009[0][1][0]}},{{&g_1009[0][1][0],(void*)0,&g_1009[0][1][0],&g_1009[0][1][0]}},{{&g_1009[0][1][0],&g_1009[0][1][0],&g_3,&g_3}},{{&l_1032,&l_1032,&l_1054,&g_74}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1132[i] = &g_226.f2;
                    (*l_1137) |= (safe_rshift_func_uint8_t_u_s((--(*l_1031)), (0x602DB0C02BD01142LL <= (((*l_1136) = (safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((*g_660) = (safe_add_func_int8_t_s_s((*l_1033), p_19.f1))), (l_1134 |= ((*l_1033) || ((*l_1133) = ((safe_sub_func_uint8_t_u_u(((-1L) != (l_1130 != ((*l_1131) = &p_20))), p_19.f0)) == g_137.f2)))))) != l_1083.f0), p_19.f2))) && 0x49D4C67EL))));
                    --l_1159;
                }
                (*p_22) ^= l_1162;
            }
        }
        return (*g_1027);
    }
    else
    { 
        const int32_t l_1182 = 0xE068F493L;
        int32_t l_1195 = (-1L);
        union U3 l_1210 = {0x8F3E88ADL};
        uint64_t *l_1232[1][6][6] = {{{&g_809,(void*)0,(void*)0,&g_809,(void*)0,(void*)0},{&g_482.f1,(void*)0,&g_809,&g_482.f1,(void*)0,(void*)0},{&g_66,(void*)0,(void*)0,&g_66,(void*)0,&g_809},{&g_809,(void*)0,(void*)0,&g_809,(void*)0,(void*)0},{&g_482.f1,(void*)0,&g_809,&g_482.f1,(void*)0,(void*)0},{&g_66,(void*)0,(void*)0,&g_66,(void*)0,&g_809}}};
        uint64_t **l_1233 = &l_1232[0][1][0];
        int8_t *l_1238 = &g_137.f0;
        int32_t l_1250 = 0xCBAA1E8DL;
        int32_t l_1251 = 0L;
        struct S0 l_1252 = {0x9F2C3D2C3A281A53LL,4UL,0xFBB2L,0x86540B9EL};
        struct S0 *l_1299 = &g_1271;
        int16_t *l_1312[1];
        int32_t l_1321 = (-1L);
        union U3 ****l_1329 = &g_734;
        struct S1 l_1337 = {-1L,0x65L,0x1DL};
        int32_t *l_1353 = &l_1156[0][0][0];
        int64_t **l_1358 = &g_843[0];
        int8_t **l_1440 = (void*)0;
        int8_t **l_1441 = &l_1238;
        uint32_t l_1442 = 0x0E8AAD32L;
        uint32_t l_1447 = 0UL;
        union U3 *l_1450[7][4][6] = {{{&l_1210,&g_89,&l_1210,&l_1449,&l_1210,&g_89},{&l_1210,&l_1210,&l_1210,&l_1449,&l_1422,&l_1422},{&l_1210,&l_1422,&l_1210,&l_1422,&l_1210,&g_89},{&l_1422,&l_1422,&l_1210,&l_1422,&l_1422,&l_1422}},{{&l_1422,&l_1210,&l_1422,&l_1422,&l_1210,&l_1422},{&l_1210,&g_89,&l_1210,&l_1449,&l_1210,&g_89},{&l_1210,&l_1210,&l_1210,&l_1449,&l_1422,&l_1422},{&l_1210,&l_1422,&l_1422,&l_1422,&l_1210,&l_1422}},{{&l_1210,&l_1422,&l_1422,&l_1449,&l_1210,&l_1449},{&l_1210,&g_89,&l_1210,&l_1422,&l_1422,&l_1449},{&l_1210,&l_1422,&l_1422,&l_1210,&l_1422,&l_1422},{&l_1422,&g_89,&l_1422,&l_1210,&l_1210,&l_1422}},{{&l_1210,&l_1422,&l_1422,&l_1422,&l_1210,&l_1422},{&l_1210,&l_1422,&l_1422,&l_1449,&l_1210,&l_1449},{&l_1210,&g_89,&l_1210,&l_1422,&l_1422,&l_1449},{&l_1210,&l_1422,&l_1422,&l_1210,&l_1422,&l_1422}},{{&l_1422,&g_89,&l_1422,&l_1210,&l_1210,&l_1422},{&l_1210,&l_1422,&l_1422,&l_1422,&l_1210,&l_1422},{&l_1210,&l_1422,&l_1422,&l_1449,&l_1210,&l_1449},{&l_1210,&g_89,&l_1210,&l_1422,&l_1422,&l_1449}},{{&l_1210,&l_1422,&l_1422,&l_1210,&l_1422,&l_1422},{&l_1422,&g_89,&l_1422,&l_1210,&l_1210,&l_1422},{&l_1210,&l_1422,&l_1422,&l_1422,&l_1210,&l_1422},{&l_1210,&l_1422,&l_1422,&l_1449,&l_1210,&l_1449}},{{&l_1210,&g_89,&l_1210,&l_1422,&l_1422,&l_1449},{&l_1210,&l_1422,&l_1422,&l_1210,&l_1422,&l_1422},{&l_1422,&g_89,&l_1422,&l_1210,&l_1210,&l_1422},{&l_1210,&l_1422,&l_1422,&l_1422,&l_1210,&l_1422}}};
        struct S2 **l_1453 = &l_1070[3][0];
        int32_t l_1484 = (-3L);
        int16_t l_1486 = 1L;
        int32_t l_1492 = 0x7D297B3BL;
        int32_t l_1535 = 0xA733CE04L;
        int32_t l_1536[5][5][2] = {{{0x8B6BD31DL,1L},{(-1L),0x11D6EC69L},{0xECFD9807L,(-10L)},{0x9AE2276BL,0xECFD9807L},{0L,0xDC5B4171L}},{{0L,0xECFD9807L},{0x9AE2276BL,(-10L)},{0xECFD9807L,0x11D6EC69L},{(-1L),1L},{0x8B6BD31DL,0xD77A54A8L}},{{0xD77A54A8L,(-1L)},{1L,0x8B6BD31DL},{0xDC5B4171L,0x177DB9D8L},{1L,0x177DB9D8L},{0xDC5B4171L,0x8B6BD31DL}},{{1L,(-1L)},{0xD77A54A8L,0xD77A54A8L},{0x8B6BD31DL,1L},{(-1L),0x11D6EC69L},{0xECFD9807L,(-10L)}},{{0x9AE2276BL,0xECFD9807L},{0L,0xDC5B4171L},{0L,0xECFD9807L},{0x9AE2276BL,(-10L)},{0xECFD9807L,0x11D6EC69L}}};
        uint32_t *l_1556[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S1 * const *l_1559 = &l_1236[6][2][3];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1312[i] = &g_135;
lbl_1400:
        for (g_74 = 4; (g_74 >= 0); g_74 -= 1)
        { 
            struct S0 **l_1180 = (void*)0;
            int8_t *l_1183[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_1184 = (void*)0;
            int32_t *l_1185 = &l_1084;
            int8_t l_1216[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1216[i] = 7L;
            (*l_1185) ^= ((&l_1096[g_74] != &l_1096[g_74]) < (!(((safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((65535UL != (((l_1172[2] >= (safe_rshift_func_int8_t_s_u((p_20 = (safe_sub_func_uint64_t_u_u((((!((((((((safe_mod_func_uint32_t_u_u(((((l_1180 != (void*)0) == ((!(l_1182 , 0x4436D8DCC2C8BBDALL)) | l_1182)) | g_188.f0) > 5UL), 0x7D5DD23CL)) , l_1172[1]) , l_1182) && l_1156[0][0][0]) , 9L) , 0x88DAL) >= (*g_660)) != g_137.f1)) , l_1096[g_74]) == l_1096[g_74]), (-1L)))), 2))) | 18446744073709551610UL) || (*g_660))), 0UL)) >= 0x74L), 9UL)), p_19.f2)) && l_1096[g_74]) > 0x6C66L)));
            if (l_1182)
                break;
            for (p_19.f1 = 0; (p_19.f1 <= 1); p_19.f1 += 1)
            { 
                uint64_t *l_1192 = &g_469.f1;
                uint32_t *l_1193 = &l_1096[g_74];
                int32_t l_1194[7] = {(-1L),0x92CDA885L,(-1L),0x92CDA885L,0x92CDA885L,(-1L),0x92CDA885L};
                int i;
                l_1156[0][0][0] |= (safe_rshift_func_int8_t_s_u(0x86L, ((0x2BCD1101L >= (((((safe_sub_func_uint64_t_u_u((++(*l_1019)), ((*l_1192) = g_135))) >= ((*l_1193) = (3UL & g_106))) >= l_1194[1]) , p_19) , 0x8B196327L)) ^ p_19.f2)));
                l_1195 = l_1182;
                for (g_226.f1 = 0; (g_226.f1 <= 1); g_226.f1 += 1)
                { 
                    int16_t *l_1215 = &g_913[1][1];
                    int8_t *l_1217 = &g_562;
                    int i, j, k;
                    (*l_1185) = (safe_div_func_int64_t_s_s(((**g_1108) , (safe_add_func_uint8_t_u_u((&p_20 != ((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u(g_1009[g_226.f1][g_226.f1][(g_74 + 1)], (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s((p_20 = (safe_mod_func_int16_t_s_s(((l_1210 , g_1015) > ((*l_1215) ^= (((l_1210.f0 >= (((safe_div_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(p_20, g_137.f0)) < p_20), p_19.f0)) , 9UL) || g_469.f1)) <= (*l_1185)) == (-1L)))), g_89.f0))), 0x6FL)), l_1210.f0)))), l_1216[0])) , l_1217)), p_19.f1))), p_19.f1));
                    (*l_1185) &= (safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((void*)0 != &g_843[0]), (l_1172[2] ^ (l_1195 = ((p_20 >= (((!l_1032) , (safe_mod_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u(0L, p_19.f2)) > (*g_660)), 7)) , p_20) | p_19.f0), 0xC515L))) ^ (*g_660))) != g_1009[g_226.f1][g_226.f1][(g_74 + 1)]))))), g_469.f0));
                    return (*g_1027);
                }
            }
        }
        l_1195 |= (safe_lshift_func_uint16_t_u_s(0x186AL, 10));
        if (((((*l_1233) = ((~p_19.f1) , l_1232[0][0][5])) == (void*)0) != (p_20 ^= ((*l_1238) |= (safe_sub_func_uint32_t_u_u((((void*)0 != l_1236[6][1][1]) ^ ((void*)0 != l_1237[1])), g_809))))))
        { 
            int32_t l_1242 = 0x326CDEC3L;
            int32_t *l_1247 = &l_1195;
            int64_t *l_1249[2][4][7] = {{{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_738,(void*)0,&g_738,&g_144,&g_144,&g_738,&g_188.f0},{&g_144,(void*)0,&g_738,&g_188.f0,(void*)0,&g_144,(void*)0},{&g_188.f0,&g_144,&g_144,&g_188.f0,&g_188.f0,&g_738,&g_144}},{{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_738,&g_144,&g_144,&g_144,&g_144},{&g_188.f0,&g_188.f0,&g_738,&g_144,&g_144,&g_738,(void*)0},{&g_144,(void*)0,&g_144,&g_144,(void*)0,&g_144,&g_188.f0}}};
            int16_t **l_1263 = &l_1237[0];
            struct S0 l_1290 = {-9L,18446744073709551615UL,0L,2UL};
            int i, j, k;
            l_1251 = (((*l_1031) = (l_1156[0][0][0] == (l_1250 = (l_1084 = (((((+(((safe_mul_func_uint8_t_u_u(p_19.f0, l_1172[0])) != (l_1242 ^ ((((**g_1108) , (((*l_1247) = (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((1L >= p_19.f1), 1)), p_20))) == (-1L))) < g_806) , l_1248))) <= l_1156[0][0][0])) , &g_1027) == &g_184) & 0x768DL) != 0x20AA5715L))))) > l_1172[1]);
            l_1252 = (*g_1027);
            g_1271 = ((*g_1027) = func_48(((*g_660) = (safe_lshift_func_uint8_t_u_s(((((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((&g_61[1][1][2] != &l_1248), 9)), l_1195)), ((*l_1031)--))) && (((((((*l_1247) , (((*l_1263) = l_1237[3]) == l_1264)) , (safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(g_66, g_1009[0][1][5])), p_19.f2)) != 0x20L), 0x63F0L))) < 0x7DC9L) , g_61[1][1][1]) < p_19.f1) , p_20)) | 0xD3L) == g_1009[1][0][2]), 0))), g_89.f0));
            if (((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((((safe_div_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((((*l_1247) >= (((((*g_1109) , &g_96) != (l_1284[1][0][2] = p_22)) <= g_1009[0][1][0]) , (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((void*)0 != l_1289), p_19.f1)), (-7L))))) ^ p_19.f0), p_19.f1)) || l_1252.f1) && p_19.f0), 0x9C83L)) || 0UL) || g_135) , 0xBCFA8849L), 4294967286UL)), p_20)), 7)) , (*l_1247)), g_226.f0)) , 0xFB35DF8AL))
            { 
                return l_1290;
            }
            else
            { 
                uint8_t l_1291 = 250UL;
                if (l_1291)
                { 
                    return (*g_1027);
                }
                else
                { 
                    struct S0 *l_1298[5] = {&g_188,&g_188,&g_188,&g_188,&g_188};
                    int16_t l_1302 = 1L;
                    int32_t l_1305 = 0L;
                    int i;
                    l_1305 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((((l_1298[3] = &l_1290) == (l_1299 = (void*)0)) & 0x6ED49752BD0B5B3DLL) < (((((safe_lshift_func_int8_t_s_u((l_1302 && ((l_1302 == (safe_mod_func_uint64_t_u_u(p_19.f1, 0x4B66051073824B6CLL))) <= l_1291)), p_19.f2)) >= 0xA3L) ^ 0x4248B22CL) || l_1302) < 0xE9ABL)) , p_19.f0), 12)), 0L));
                    return l_1290;
                }
            }
        }
        else
        { 
            int8_t l_1310[2];
            uint32_t *l_1311 = &l_1096[5];
            int32_t l_1322 = 0xCF935438L;
            int64_t *l_1323 = &g_1271.f0;
            union U3 ****l_1328[1];
            struct S2 l_1348 = {0x312160EEL,0xBD8CF7D3B473B3BALL,0x8C820CD2L};
            int32_t l_1349 = 0x7F4D1961L;
            struct S0 l_1361 = {0xF7F3DA35AD362287LL,0x09F8AE04L,-1L,0xAAA4F487L};
            uint32_t l_1394 = 0UL;
            struct S1 *l_1411[5] = {&g_226,&g_226,&g_226,&g_226,&g_226};
            struct S1 *l_1421 = &g_1412;
            uint16_t l_1423 = 1UL;
            int i;
            for (i = 0; i < 2; i++)
                l_1310[i] = (-1L);
            for (i = 0; i < 1; i++)
                l_1328[i] = &g_734;
            l_1322 = ((((*l_1264) = (-1L)) <= (((++(*g_660)) > g_469.f1) | ((*l_1238) = ((safe_sub_func_uint32_t_u_u(((*l_1311) = l_1310[1]), (l_1237[0] == l_1312[0]))) ^ (g_135 &= ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(g_482.f2, p_19.f0)), l_1252.f3)) | l_1252.f2), g_188.f3)), (-5L))) != 0x7DL)))))) | l_1321);
            if (((l_1322 & ((*l_1323) = p_19.f1)) > ((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((((*g_1103) != (l_1329 = l_1328[0])) | ((l_1195 == (g_577 > ((0x41F4L < l_1310[1]) < l_1252.f2))) || 0xACE79213C0760D43LL)) ^ l_1310[1]) >= g_181), g_1330)), p_19.f0)) >= p_19.f1)))
            { 
                uint32_t l_1331 = 4294967295UL;
                uint8_t *l_1338[4][7][5] = {{{&l_1068,&l_1068,&l_1068,&l_1068,&g_106},{&g_106,&l_1337.f1,&g_106,&g_137.f1,&l_1068},{&g_137.f1,&g_137.f1,&g_137.f1,(void*)0,&l_1337.f1},{&g_137.f1,&l_1068,(void*)0,&g_137.f1,&g_137.f1},{&g_226.f1,&l_1068,&g_137.f1,&l_1068,&g_137.f1},{&g_137.f1,&g_137.f1,(void*)0,&l_1068,&g_226.f1},{&g_137.f1,(void*)0,(void*)0,&l_1337.f1,&g_137.f1}},{{&g_106,(void*)0,&l_1068,&g_137.f1,&g_226.f1},{&g_137.f1,&g_137.f1,&g_226.f1,&g_137.f1,&g_137.f1},{&g_137.f1,&l_1068,&g_226.f1,&g_106,&g_106},{&g_137.f1,&l_1068,&l_1068,&l_1337.f1,&g_106},{&l_1068,&g_137.f1,&g_137.f1,&l_1068,&g_106},{(void*)0,&l_1337.f1,&g_137.f1,&l_1337.f1,&g_137.f1},{&g_106,&l_1068,&g_226.f1,(void*)0,&g_226.f1}},{{&g_106,&g_106,&g_137.f1,&g_137.f1,&g_137.f1},{&g_106,&g_106,&g_137.f1,&l_1068,&g_226.f1},{&g_137.f1,&g_137.f1,&g_226.f1,&g_226.f1,&g_137.f1},{&l_1337.f1,&g_137.f1,&g_137.f1,(void*)0,&g_137.f1},{&g_137.f1,&l_1337.f1,&g_137.f1,&g_137.f1,&l_1337.f1},{&g_106,(void*)0,&l_1068,&l_1337.f1,&l_1068},{&g_137.f1,&g_137.f1,&g_226.f1,&g_106,&g_106}},{{&l_1337.f1,(void*)0,&g_226.f1,&g_106,&l_1068},{&g_137.f1,&g_106,&l_1068,&g_226.f1,&l_1337.f1},{&g_106,&g_226.f1,(void*)0,&g_226.f1,&g_137.f1},{&g_106,&g_137.f1,&g_106,&l_1337.f1,&g_106},{&g_137.f1,&g_137.f1,&l_1337.f1,&g_106,&g_137.f1},{&g_137.f1,&g_137.f1,&g_106,&g_106,(void*)0},{&l_1068,&g_137.f1,&g_226.f1,(void*)0,&l_1337.f1}}};
                uint32_t *l_1339 = (void*)0;
                uint32_t *l_1340 = &g_1271.f3;
                int32_t l_1341 = 0xD769426FL;
                int32_t **l_1351 = (void*)0;
                int32_t **l_1352 = &l_1284[1][0][2];
                union U3 l_1384 = {0xE2501B63L};
                union U3 ***l_1395 = &g_735[0][2];
                int i, j, k;
                if ((l_1341 = (l_1322 = (l_1331 >= (((*l_1340) = ((l_1251 = ((*l_1031) = ((func_23(&l_1156[0][0][0], &l_1032) , (safe_sub_func_int64_t_s_s((((*l_1264) = (!p_19.f2)) != (g_562 & ((l_1337 , g_469.f2) < g_31))), p_19.f0))) <= 0x470AL))) ^ p_19.f0)) , l_1321)))))
                { 
                    int8_t l_1344 = (-3L);
                    int32_t l_1347[4][5] = {{0x7A60F52FL,0x7A60F52FL,0x7A60F52FL,0x7A60F52FL,0x7A60F52FL},{0x1BB5148BL,0x643BE7B6L,0x1BB5148BL,0x643BE7B6L,0x1BB5148BL},{0x7A60F52FL,0x7A60F52FL,0x7A60F52FL,0x7A60F52FL,0x7A60F52FL},{0x1BB5148BL,0x643BE7B6L,0x1BB5148BL,0x643BE7B6L,0x1BB5148BL}};
                    int i, j;
                    l_1349 = (l_1195 | (safe_lshift_func_int8_t_s_s((((((l_1344 & ((l_1322 &= (l_1347[2][0] |= ((l_1344 > l_1344) | (safe_lshift_func_int16_t_s_s(0L, g_181))))) ^ (l_1348 , 0xDC55L))) , &g_288) != (void*)0) > g_144) | l_1341), p_20)));
                }
                else
                { 
                    (*g_544) = l_1350;
                }
                l_1353 = ((*l_1352) = &l_1195);
lbl_1378:
                for (l_1348.f2 = 28; (l_1348.f2 >= 3); l_1348.f2--)
                { 
                    struct S1 l_1357 = {0x8EL,255UL,0x0EL};
                    (*l_1353) = (l_1341 ^= (*l_1353));
                    l_1357 = func_23(l_1356, p_21);
                    (*l_1289) = l_1358;
                }
                if (((safe_add_func_int32_t_s_s(((*l_1353) == (l_1361 , (safe_mul_func_int8_t_s_s(((*l_1238) = (safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((p_20 & ((*l_1019) = p_19.f0)))) > ((~(safe_mul_func_uint8_t_u_u(((*l_1031) &= ((safe_add_func_int16_t_s_s(g_188.f0, p_19.f0)) != (p_19.f1 | 254UL))), g_74))) != l_1348.f1)), 0L))), p_19.f0)))), 0UL)) != 0x1DL))
                { 
                    int16_t **l_1372 = &l_1312[0];
                    int16_t ***l_1373 = &l_1372;
                    struct S2 *l_1374 = &l_1348;
                    (*l_1373) = l_1372;
                    (*g_1061) = &l_1337;
                    (*g_1108) = l_1374;
                    p_22 = (void*)0;
                }
                else
                { 
                    uint8_t l_1375 = 1UL;
                    int32_t *l_1379 = &l_1251;
                    struct S0 l_1385[2][2] = {{{0L,0x1BFA88B6L,1L,0xABD266CFL},{0L,0x1BFA88B6L,1L,0xABD266CFL}},{{0L,0x1BFA88B6L,1L,0xABD266CFL},{0L,0x1BFA88B6L,1L,0xABD266CFL}}};
                    int i, j;
                    l_1375++;
                    if (g_226.f2)
                        goto lbl_1378;
                    l_1379 = p_21;
                    l_1322 = (safe_rshift_func_uint16_t_u_s(((**g_1108) , (((g_482.f1 = (safe_sub_func_uint64_t_u_u((((*l_1353) = ((l_1384 , l_1385[0][1]) , ((((*g_660) = (safe_rshift_func_int8_t_s_s((l_1361.f3 != (4294967295UL != ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s((((l_1321 |= (*l_1353)) != (7UL == p_19.f1)) == 0x4C96780BL), p_19.f2)), 0xA7E17E6AL)), g_469.f0)) ^ l_1394))), p_19.f2))) , (void*)0) != l_1395))) == l_1396), 7UL))) & p_19.f1) <= 1UL)), 14));
                }
            }
            else
            { 
                uint8_t l_1397[1][4][1] = {{{255UL},{0x38L},{255UL},{0x38L}}};
                struct S1 **l_1413 = &l_1236[6][1][1];
                struct S1 **l_1414 = &g_225;
                struct S1 **l_1415 = &g_225;
                struct S1 **l_1416 = &g_225;
                struct S1 **l_1417 = &g_225;
                struct S1 **l_1418 = &g_225;
                struct S1 **l_1419 = &g_225;
                struct S1 **l_1420 = (void*)0;
                int i, j, k;
                ++l_1397[0][0][0];
                if (g_31)
                    goto lbl_1400;
                l_1423 ^= ((((0x0DL < (safe_add_func_uint32_t_u_u(0x8631C47BL, ((*l_1311) = (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((*l_1238) |= (*l_1353)), 3)) , (safe_rshift_func_uint16_t_u_s(p_19.f2, 12))), (++(*g_660)))))))) >= (l_1322 = (l_1411[4] != (g_1412 , (l_1421 = ((*l_1413) = l_1236[6][1][1])))))) , l_1422) , (*l_1353));
            }
        }
        if ((!(safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((((*l_1441) = (func_48(p_19.f0, ((*l_1353) <= (safe_mod_func_int64_t_s_s(((**l_1358) = (safe_rshift_func_uint16_t_u_s((((((void*)0 == l_1436[4]) & p_20) & l_1437) == (safe_add_func_int64_t_s_s((*l_1353), 0x28F280CAC10D30AFLL))), (*l_1353)))), (*l_1353))))) , &l_1172[1])) == &p_20) , g_66), g_1271.f0)), l_1442)))), 4))))
        { 
            int32_t **l_1445 = &g_152[0];
            for (g_226.f1 = 10; (g_226.f1 > 30); g_226.f1 = safe_add_func_uint8_t_u_u(g_226.f1, 7))
            { 
                l_1321 ^= (*l_1353);
                if (p_19.f1)
                    goto lbl_1446;
            }
lbl_1446:
            (*l_1445) = p_22;
            return (*l_1299);
        }
        else
        { 
            l_1447 &= (p_19.f0 == 6UL);
            (*l_1353) |= p_20;
        }
        if (((((*g_660) < (~18446744073709551606UL)) || ((*l_1299) , ((l_1422 = l_1449) , (safe_mul_func_int16_t_s_s(((void*)0 != l_1453), (safe_unary_minus_func_int16_t_s((safe_sub_func_int32_t_s_s((+(safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((g_188.f2 ^= ((((safe_mod_func_int64_t_s_s(0xD960DAC399E51775LL, p_20)) != (*l_1353)) && g_61[1][0][2]) & p_19.f2)) <= 0x136AL), 0xCDL)), (*l_1353)))), (*l_1353)))))))))) > g_1412.f1))
        { 
            int64_t l_1478[4] = {0L,0L,0L,0L};
            uint32_t l_1479[2];
            int32_t l_1480 = (-7L);
            uint8_t *l_1483 = &l_1337.f1;
            int32_t l_1487 = 0x47E86D30L;
            int32_t l_1488 = 0x9042FB30L;
            int32_t l_1490 = 1L;
            int32_t l_1491[6] = {0xFB4700ADL,(-1L),0xFB4700ADL,0xFB4700ADL,(-1L),0xFB4700ADL};
            uint32_t l_1493 = 0x804F76F7L;
            int i;
            for (i = 0; i < 2; i++)
                l_1479[i] = 0x6C64FD19L;
            for (l_1449.f0 = 1; (l_1449.f0 <= 8); l_1449.f0 = safe_add_func_int8_t_s_s(l_1449.f0, 9))
            { 
                int16_t l_1485[6] = {0x8253L,0x8253L,0x8253L,0x8253L,0x8253L,0x8253L};
                int32_t l_1489[5];
                uint16_t l_1500 = 65527UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_1489[i] = 0L;
                l_1321 |= (safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((0x00F1B4C3E2C98F38LL ^ (g_66--)), (((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((p_19.f2 & ((((*l_1264) = (((l_1479[0] = l_1478[1]) == ((((l_1478[3] < (l_1480 &= l_1478[1])) , (func_48((safe_add_func_int64_t_s_s(((void*)0 != l_1483), p_19.f2)), l_1478[1]) , l_1478[1])) == (*l_1353)) != l_1484)) != p_19.f0)) , 0xD703L) >= 0UL)), p_19.f0)) , p_20), p_19.f2)) && g_135) , (*g_660)))), p_19.f2));
                l_1493--;
                for (l_1032 = 0; (l_1032 >= 0); l_1032 -= 1)
                { 
                    int32_t *l_1497 = &g_181;
                    int32_t **l_1496 = &l_1497;
                    int32_t ***l_1498 = &l_1496;
                    int32_t l_1499 = 0xD4C937DEL;
                    (*l_1498) = l_1496;
                    if (p_19.f0)
                        continue;
                    if ((*l_1353))
                        continue;
                    l_1488 &= (((6UL < (0xCEL || (g_1015 ^ ((*l_1019) = (g_469.f1 ^= g_482.f2))))) ^ 0xAD40L) , (2L > l_1499));
                    --l_1500;
                }
            }
        }
        else
        { 
            uint32_t l_1512 = 0x3ACDB0C8L;
            int32_t l_1520 = (-1L);
            int32_t l_1529 = 0xF4C0368DL;
            int32_t l_1531 = 0L;
            int32_t l_1533 = 0xD5151666L;
            int32_t l_1534 = (-1L);
            int32_t l_1537 = (-1L);
            int32_t l_1538 = 0x0DE0C416L;
            int32_t l_1539 = 0xC4642C7EL;
            int32_t l_1540 = (-9L);
            int32_t l_1541 = (-4L);
            union U3 *****l_1553 = (void*)0;
            uint32_t l_1557 = 0x28DF730AL;
            int64_t *l_1563[5];
            uint8_t l_1566 = 255UL;
            int32_t **l_1569 = &l_1284[1][0][2];
            int i;
            for (i = 0; i < 5; i++)
                l_1563[i] = &g_738;
            (*l_1353) |= 0xA45C2FDDL;
            for (l_1486 = (-19); (l_1486 <= (-29)); l_1486 = safe_sub_func_uint8_t_u_u(l_1486, 1))
            { 
                int8_t l_1505 = 0x84L;
                struct S2 l_1517[4][6][1] = {{{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{4294967295UL,0x82F99FBA04DD92EALL,0UL}},{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{2UL,1UL,0xC12D752AL}},{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{4294967295UL,0x82F99FBA04DD92EALL,0UL}}},{{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{2UL,1UL,0xC12D752AL}},{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{4294967295UL,0x82F99FBA04DD92EALL,0UL}},{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{2UL,1UL,0xC12D752AL}}},{{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{4294967295UL,0x82F99FBA04DD92EALL,0UL}},{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{2UL,1UL,0xC12D752AL}},{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{4294967295UL,0x82F99FBA04DD92EALL,0UL}}},{{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{2UL,1UL,0xC12D752AL}},{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{4294967295UL,0x82F99FBA04DD92EALL,0UL}},{{4294967289UL,0x1FFA06610D34ACABLL,0xB9E95A4BL}},{{2UL,1UL,0xC12D752AL}}}};
                int32_t l_1528 = 0x588FFA8FL;
                int32_t l_1532[3];
                uint16_t l_1545 = 65534UL;
                struct S1 l_1549 = {-9L,1UL,2L};
                uint32_t *l_1555 = (void*)0;
                uint32_t **l_1554[7][7] = {{&l_1555,&l_1555,&l_1555,(void*)0,&l_1555,(void*)0,&l_1555},{&l_1555,&l_1555,&l_1555,&l_1555,(void*)0,&l_1555,&l_1555},{&l_1555,&l_1555,&l_1555,(void*)0,(void*)0,&l_1555,&l_1555},{(void*)0,&l_1555,(void*)0,&l_1555,&l_1555,&l_1555,&l_1555},{(void*)0,&l_1555,(void*)0,&l_1555,(void*)0,&l_1555,&l_1555},{&l_1555,&l_1555,&l_1555,&l_1555,(void*)0,&l_1555,&l_1555},{&l_1555,&l_1555,&l_1555,(void*)0,&l_1555,&l_1555,&l_1555}};
                union U3 *****l_1558 = (void*)0;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1532[i] = 0xE68ADE6EL;
                (*l_1020) = (func_48((*g_660), g_137.f1) , (*g_1027));
                if ((l_1505 || p_19.f1))
                { 
                    uint64_t l_1506 = 18446744073709551609UL;
                    struct S2 ***l_1510 = (void*)0;
                    struct S2 ****l_1509[5][2][6] = {{{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,(void*)0},{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,(void*)0}},{{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,(void*)0},{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,(void*)0}},{{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,(void*)0},{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,(void*)0}},{{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,(void*)0},{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,(void*)0}},{{&l_1510,&l_1510,(void*)0,&l_1510,&l_1510,&l_1510},{&l_1510,&l_1510,&l_1510,&l_1510,&l_1510,&l_1510}}};
                    int i, j, k;
                    if (l_1505)
                        break;
                    ++l_1506;
                    g_1511 = &g_1108;
                }
                else
                { 
                    if (l_1512)
                        break;
                    return (*l_1299);
                }
                if (((((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_1517[3][1][0] , (*g_660)), (safe_mul_func_int8_t_s_s(p_19.f2, ((l_1520 = (((*g_1027) , (*l_1233)) == (void*)0)) == (safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((g_913[1][1] = p_20), (*l_1353))), 0xE152E0AFL))))))), l_1525)) ^ p_20) | p_19.f0) | g_137.f2))
                { 
                    int16_t l_1526 = 0x77B8L;
                    int32_t l_1530[2][1];
                    struct S1 l_1546 = {0L,255UL,7L};
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1530[i][j] = (-1L);
                    }
                    g_1542++;
                    if (l_1532[2])
                        break;
                    (*l_1353) = l_1545;
                    l_1546 = func_23(&l_1528, &l_1321);
                }
                else
                { 
                    int64_t l_1552 = 0x2D76B5E264FBDA4DLL;
                    l_1547[0] = l_1547[2];
                    l_1549 = func_23(p_21, &l_1528);
                    (*l_1353) = (-6L);
                    (*l_1353) &= (safe_lshift_func_uint16_t_u_s(l_1552, 5));
                }
                (*l_1353) |= ((((((((l_1531 , l_1553) != ((((l_1556[4] = g_288) == (void*)0) >= l_1557) , l_1558)) ^ (((void*)0 == l_1559) , g_226.f1)) > 0x2AL) != p_20) > l_1505) && 0xFC03031BD82D250DLL) <= p_19.f1);
                l_1492 |= (g_482.f0 || (safe_mul_func_uint16_t_u_u((!((void*)0 == l_1563[2])), ((((p_19.f1 || ((safe_sub_func_uint16_t_u_u((*g_660), ((((*l_1031) = (0x31F9L >= g_1412.f0)) > (*l_1353)) >= g_188.f1))) & p_19.f1)) , 1L) != g_1094) > 0L))));
            }
            --l_1566;
            (*l_1569) = p_22;
        }
    }
    for (l_1449.f0 = 0; (l_1449.f0 < 36); l_1449.f0 = safe_add_func_uint64_t_u_u(l_1449.f0, 5))
    { 
        int32_t l_1586 = 0x43F37C00L;
        int64_t *l_1593 = &g_188.f0;
        for (g_121 = (-5); (g_121 == 27); g_121 = safe_add_func_int64_t_s_s(g_121, 1))
        { 
            union U3 l_1574 = {4294967295UL};
            int32_t l_1607 = 0x023EEE87L;
            struct S1 l_1615 = {0xB2L,0x06L,0x8DL};
            struct S0 l_1617 = {0x46F311065F5DF6A6LL,1UL,1L,0x63098A48L};
            if (((l_1574 , (safe_mod_func_uint64_t_u_u(g_96, (safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(p_20, 0xC961F77E7F779C1ELL)), (((safe_lshift_func_uint8_t_u_s(g_188.f1, (+(safe_sub_func_uint16_t_u_u(0xA5FFL, l_1574.f0))))) || l_1586) <= p_20)))))) > 8UL))
            { 
                int8_t *l_1594 = &g_226.f0;
                struct S2 ****l_1595 = &g_1511;
                int32_t l_1596 = (-10L);
                struct S0 l_1608 = {0x793E344517C0E124LL,0x9F5CC6C3L,0x3187L,0x52A6F1F9L};
                struct S0 l_1616 = {0L,0x74B87E2CL,0xC3C1L,3UL};
                if (((((((((g_913[0][2] ^ (safe_sub_func_uint8_t_u_u(((+(&g_188 == l_1590)) & 65535UL), ((*l_1594) &= (safe_mod_func_uint32_t_u_u(((g_74 == ((*l_1031) = (l_1593 == (void*)0))) == l_1586), l_1586)))))) > p_20) , l_1595) != (void*)0) <= l_1596) , g_61[1][1][2]) & l_1574.f0) < g_469.f0))
                { 
                    uint32_t l_1600 = 0xE4D00F7EL;
                    l_1607 ^= (((l_1596 = g_1597) , (*g_1027)) , (safe_lshift_func_int8_t_s_u(l_1600, ((((safe_add_func_uint32_t_u_u((2UL == ((*g_660) = (((((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((p_19 , ((g_469.f0 , (g_469.f1 &= (p_19.f0 == 0x22DBL))) >= g_1271.f1)), 0)) != l_1586), g_1597)) != 1UL) != l_1596) && l_1600) != (*g_660)) | 18446744073709551615UL) && 0x6AL))), p_19.f0)) | p_19.f2) >= p_19.f1) > g_1271.f3))));
                    return l_1608;
                }
                else
                { 
                    int32_t **l_1609 = &l_1284[2][0][4];
                    int32_t l_1610[7] = {0x36B2345AL,0x36B2345AL,(-8L),0x36B2345AL,0x36B2345AL,(-8L),0x36B2345AL};
                    int i;
                    if (l_1608.f1)
                        break;
                    l_1596 &= (-1L);
                    (*l_1609) = p_21;
                    l_1610[3] = 0x375599F4L;
                }
                for (g_809 = 26; (g_809 != 38); g_809 = safe_add_func_int8_t_s_s(g_809, 4))
                { 
                    int64_t l_1613 = 0xADFA72D3A48FE940LL;
                    struct S1 l_1614 = {0L,255UL,-1L};
                    l_1613 &= l_1586;
                    l_1615 = l_1614;
                    if (l_1608.f2)
                        break;
                    l_1617 = l_1616;
                }
            }
            else
            { 
                uint64_t **l_1626 = &l_1019;
                int32_t l_1631 = (-1L);
                struct S0 l_1636[5] = {{0xC97BF9093AE9A351LL,1UL,0L,0xBCF4319FL},{0xC97BF9093AE9A351LL,1UL,0L,0xBCF4319FL},{0xC97BF9093AE9A351LL,1UL,0L,0xBCF4319FL},{0xC97BF9093AE9A351LL,1UL,0L,0xBCF4319FL},{0xC97BF9093AE9A351LL,1UL,0L,0xBCF4319FL}};
                int i;
                for (p_20 = 0; (p_20 <= (-2)); p_20--)
                { 
                    int32_t **l_1620[7][1] = {{&l_1284[1][0][2]},{&l_1284[1][0][2]},{&l_1356},{&l_1284[1][0][2]},{&l_1284[1][0][2]},{&l_1356},{&l_1284[1][0][2]}};
                    uint64_t ***l_1627 = &l_1626;
                    int i, j;
                    g_288 = p_21;
                    l_1586 |= (g_1621 == ((*l_1627) = ((safe_sub_func_int64_t_s_s(0L, (--(*l_1019)))) , l_1626)));
                    l_1586 &= (~0x0E8B4BDF43E7CB98LL);
                }
                for (g_127 = (-17); (g_127 >= 8); g_127 = safe_add_func_int16_t_s_s(g_127, 3))
                { 
                    int32_t l_1635 = 0L;
                    l_1632++;
                    if (l_1635)
                        continue;
                    (*g_1027) = l_1636[3];
                }
                return l_1617;
            }
        }
    }
    if (l_1637)
    { 
        struct S0 *l_1638 = &g_1271;
        int32_t l_1639 = 2L;
        uint64_t l_1640 = 1UL;
        (*g_289) = l_1638;
        l_1640--;
    }
    else
    { 
        const uint32_t l_1646 = 8UL;
        uint64_t **l_1656 = &l_1019;
        uint32_t **l_1658 = (void*)0;
        for (g_137.f0 = (-11); (g_137.f0 < (-30)); g_137.f0 = safe_sub_func_uint16_t_u_u(g_137.f0, 2))
        { 
            struct S0 l_1645 = {0x27B4983A37DE54E3LL,18446744073709551615UL,0x9214L,1UL};
            return l_1645;
        }
        (*l_1590) = func_48(((((l_1646 | (safe_mod_func_int8_t_s_s(l_1646, (safe_sub_func_uint64_t_u_u(g_181, (((safe_div_func_int64_t_s_s(((*g_1027) , (!(((*l_1656) = l_1019) != l_1657[0]))), p_20)) & p_19.f2) || 0L)))))) && (*g_660)) , (void*)0) != l_1658), p_20);
    }
    l_1676 &= (safe_mul_func_uint8_t_u_u(255UL, (func_48(p_19.f0, (safe_sub_func_uint64_t_u_u(0x50E7822D9BE4859DLL, p_19.f1))) , (safe_rshift_func_uint8_t_u_u(((*g_1027) , (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((safe_div_func_int64_t_s_s(((safe_div_func_uint16_t_u_u((+(((l_1674[2] = l_1673) , &g_1542) == &g_127)), g_1412.f2)) == l_1675), 18446744073709551615UL)))), 5))), 6)))));
    l_1685[0][1][3] ^= ((&l_1548 == (l_1547[2] = &l_1548)) , (((((((safe_lshift_func_uint16_t_u_s(((p_20 != (safe_rshift_func_int8_t_s_u((((*l_1020) , (((p_20 != (l_1683[3] = ((*l_1681) &= p_19.f0))) > (l_1684 = p_19.f0)) & g_1597)) == p_20), p_19.f0))) <= 0x957AL), 12)) | p_20) , (void*)0) == &l_1264) & 0x464FA87C035F275DLL) ^ p_19.f0) || p_20));
    return (*g_1027);
}



static struct S1  func_23(int32_t * p_24, int32_t * p_25)
{ 
    struct S1 l_1010[7] = {{0xD3L,0xFAL,0x89L},{0xD3L,0xFAL,0x89L},{0xD3L,0xFAL,0x89L},{0xD3L,0xFAL,0x89L},{0xD3L,0xFAL,0x89L},{0xD3L,0xFAL,0x89L},{0xD3L,0xFAL,0x89L}};
    int i;
    return l_1010[5];
}



static int32_t * func_26(struct S0  p_27)
{ 
    int32_t l_29[7][4] = {{0xA426232CL,0x27420EA1L,0xA426232CL,0xA426232CL},{0x27420EA1L,0x27420EA1L,0x657CF7A0L,0x27420EA1L},{0x27420EA1L,0xA426232CL,0xA426232CL,0x27420EA1L},{0xA426232CL,0x27420EA1L,0xA426232CL,0xA426232CL},{0x27420EA1L,0x27420EA1L,0x657CF7A0L,0x27420EA1L},{0x27420EA1L,0xA426232CL,0xA426232CL,0x27420EA1L},{0xA426232CL,0x27420EA1L,0xA426232CL,0xA426232CL}};
    int32_t *l_30 = &l_29[5][2];
    int32_t *l_1000 = &g_96;
    struct S0 l_1001 = {0xB317B2D8A1FF6874LL,0UL,-4L,3UL};
    union U3 l_1002[4] = {{0UL},{0UL},{0UL},{0UL}};
    int32_t *l_1006 = (void*)0;
    int32_t *l_1007 = (void*)0;
    int32_t *l_1008 = &g_1009[0][1][0];
    int i, j;
    l_29[5][2] &= (-1L);
    --g_31;
    (*l_1008) &= ((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((-1L), (*l_30))), (!func_39((func_45(&g_3) , (l_1000 = &l_29[5][2])), l_1001, p_27.f3, p_27.f0, l_1002[1])))) & g_3);
    return &g_1009[0][1][0];
}



static uint64_t  func_39(int32_t * p_40, struct S0  p_41, const uint32_t  p_42, const uint32_t  p_43, union U3  p_44)
{ 
    int32_t *l_1003[4][3][5] = {{{&g_96,&g_96,&g_74,&g_3,&g_3},{&g_96,&g_96,&g_96,(void*)0,&g_96},{&g_3,&g_3,&g_96,(void*)0,&g_96}},{{&g_96,&g_74,&g_3,&g_3,&g_74},{&g_74,&g_3,&g_96,&g_96,&g_74},{&g_96,&g_3,&g_96,&g_96,&g_3}},{{(void*)0,&g_74,&g_74,(void*)0,&g_96},{&g_96,&g_3,&g_74,&g_96,&g_96},{&g_74,&g_96,&g_3,&g_96,&g_3}},{{&g_96,&g_96,&g_96,&g_96,&g_74},{&g_3,(void*)0,&g_96,(void*)0,&g_74},{&g_96,&g_96,&g_3,&g_96,&g_96}}};
    int32_t **l_1004 = (void*)0;
    int32_t **l_1005 = &g_288;
    int i, j, k;
    p_40 = ((*l_1005) = l_1003[2][2][0]);
    return g_482.f0;
}



static int32_t  func_45(const int32_t * p_46)
{ 
    uint8_t l_47 = 0x3CL;
    const uint16_t l_90[3][7][7] = {{{0xE1CFL,65535UL,0x193FL,0UL,65530UL,2UL,0x2146L},{0x225DL,0UL,0xD236L,0xB9AEL,0x96B8L,7UL,65527UL},{0x2068L,65535UL,0xD18CL,65530UL,0x225DL,0xD236L,0x225DL},{0x193FL,0xD18CL,0xD18CL,0x193FL,0xC666L,0UL,0xD236L},{0xB9AEL,65527UL,0xD236L,0xD18CL,0xA596L,65530UL,65535UL},{0UL,0xE1CFL,0x193FL,8UL,65535UL,0x96B8L,0xD236L},{0x0508L,0UL,65535UL,0x96B8L,65535UL,0x225DL,0x225DL}},{{0UL,0x96B8L,0x6E20L,0x96B8L,0UL,0xC666L,65527UL},{0xD18CL,65535UL,65535UL,8UL,1UL,0xA596L,0x2146L},{7UL,0UL,0xC666L,0x225DL,2UL,1UL,0xD236L},{0x225DL,65535UL,0UL,65535UL,8UL,0xAB18L,0xF800L},{0x0508L,8UL,0x2068L,0x2068L,8UL,0x0508L,1UL},{0xF800L,0xE1CFL,0x0508L,0xD18CL,2UL,0xD236L,65535UL},{0x6E20L,65535UL,7UL,65535UL,0xD236L,2UL,0xD18CL}},{{0xD18CL,0xE1CFL,65535UL,1UL,0x0508L,8UL,0x2068L},{65535UL,8UL,0xAB18L,0xF800L,0xAB18L,8UL,65535UL},{0xB9AEL,65535UL,0xF800L,0xD236L,1UL,2UL,0x225DL},{65527UL,0x0508L,65535UL,0xE1CFL,0xF6EFL,0xD236L,65535UL},{2UL,0x2146L,0xF800L,0UL,0x96B8L,0x0508L,7UL},{0x2146L,7UL,0xAB18L,65527UL,65527UL,0xAB18L,7UL},{0xF6EFL,65535UL,65535UL,0UL,7UL,1UL,65535UL}}};
    int32_t l_105 = 3L;
    int32_t l_118 = (-7L);
    int32_t l_119 = 0x97F26D1EL;
    int32_t l_120 = (-6L);
    int32_t l_122 = (-1L);
    int32_t l_123 = (-1L);
    int32_t l_124 = (-1L);
    int32_t l_125 = 0x0E35A52BL;
    int32_t l_126 = 0xB1DC0440L;
    uint64_t * const l_163[4][7][1] = {{{&g_66},{(void*)0},{&g_66},{&g_66},{&g_66},{(void*)0},{&g_66}},{{&g_66},{(void*)0},{&g_66},{&g_66},{&g_66},{(void*)0},{&g_66}},{{&g_66},{(void*)0},{&g_66},{&g_66},{&g_66},{(void*)0},{&g_66}},{{&g_66},{(void*)0},{&g_66},{&g_66},{&g_66},{(void*)0},{&g_66}}};
    int32_t **l_164 = &g_152[1];
    uint8_t l_183 = 0x2BL;
    uint32_t l_195[1];
    int16_t l_237 = 0L;
    union U3 l_260 = {4294967287UL};
    struct S1 l_262 = {0x45L,7UL,0xF0L};
    uint8_t l_269 = 0x59L;
    int32_t l_276 = 0x702A619FL;
    struct S1 l_298 = {0x9AL,0x00L,-3L};
    int8_t *l_332 = &g_137.f0;
    int8_t *l_334[5] = {&l_262.f2,&l_262.f2,&l_262.f2,&l_262.f2,&l_262.f2};
    const int8_t l_353 = 8L;
    struct S1 **l_414 = &g_225;
    struct S1 ***l_413 = &l_414;
    struct S0 l_447[2][7] = {{{0x2DF80C06088D385ELL,0x10DF3AD5L,0x5797L,0UL},{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL},{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL},{0x2DF80C06088D385ELL,0x10DF3AD5L,0x5797L,0UL},{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL},{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL},{0x2DF80C06088D385ELL,0x10DF3AD5L,0x5797L,0UL}},{{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL},{0x2DF80C06088D385ELL,0x10DF3AD5L,0x5797L,0UL},{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL},{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL},{0x2DF80C06088D385ELL,0x10DF3AD5L,0x5797L,0UL},{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL},{0x5F7949768348EAA7LL,0x69800E8CL,0xE802L,0UL}}};
    uint64_t l_470 = 0UL;
    struct S2 *l_481 = &g_482;
    union U3 **l_483[5] = {&g_446[1],&g_446[1],&g_446[1],&g_446[1],&g_446[1]};
    struct S1 * const **l_490 = (void*)0;
    int32_t *l_521 = &g_74;
    int32_t l_563[5][1][4];
    int32_t l_579 = 6L;
    int16_t l_581[4] = {0x8069L,0x8069L,0x8069L,0x8069L};
    int32_t l_582 = 0x303D86ECL;
    uint32_t l_712 = 18446744073709551615UL;
    uint16_t **l_726[7];
    int64_t *l_841 = &l_447[1][2].f0;
    int64_t **l_840[2][4] = {{&l_841,&l_841,&l_841,&l_841},{&l_841,&l_841,&l_841,&l_841}};
    int64_t l_911[6][4] = {{0L,(-1L),0L,0xC99F08C2D8F26A29LL},{0xCD9C729F7B90733ALL,(-1L),(-1L),(-1L)},{(-1L),(-10L),(-10L),(-1L)},{0L,(-1L),(-10L),0xC99F08C2D8F26A29LL},{(-1L),0xCD9C729F7B90733ALL,(-1L),0xCD9C729F7B90733ALL},{0xCD9C729F7B90733ALL,(-10L),0L,0xCD9C729F7B90733ALL}};
    int64_t l_912 = (-1L);
    int32_t l_914 = 0xD4A65E95L;
    uint8_t l_971 = 0x5DL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_195[i] = 4294967292UL;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_563[i][j][k] = 0x7DD8A3D2L;
        }
    }
    for (i = 0; i < 7; i++)
        l_726[i] = &g_660;
lbl_901:
    if ((0xFA8B742DL && l_47))
    { 
        int8_t l_71[7];
        int32_t *l_109 = &g_74;
        int32_t *l_110 = &g_74;
        int32_t *l_111 = &g_96;
        int32_t *l_112 = (void*)0;
        int32_t *l_113 = &g_96;
        int32_t *l_114 = &g_96;
        int32_t *l_115 = &l_105;
        int32_t *l_116 = &l_105;
        int32_t *l_117[2];
        int i;
        for (i = 0; i < 7; i++)
            l_71[i] = (-6L);
        for (i = 0; i < 2; i++)
            l_117[i] = &l_105;
        if (((void*)0 != &g_3))
        { 
            uint16_t *l_51 = &g_31;
            const struct S2 l_54 = {1UL,0x84ADDBFD33F116E8LL,1UL};
            uint16_t *l_60 = &g_61[1][1][2];
            uint8_t *l_64 = &l_47;
            uint64_t *l_65 = &g_66;
            if ((func_48(((*l_51) = g_7), (safe_div_func_uint64_t_u_u((l_54 , ((*l_65) = (safe_lshift_func_int16_t_s_u((0x61DFL >= (~((l_54.f0 >= ((*l_64) = ((safe_lshift_func_uint8_t_u_u(g_7, 0)) ^ ((*l_60)++)))) && 0x5AAEL))), 0)))), (-1L)))) , (-6L)))
            { 
                int16_t l_72 = 0xD26FL;
                int32_t *l_73 = &g_74;
                int32_t **l_75 = &l_73;
                union U3 l_76 = {9UL};
                (*l_73) = ((safe_add_func_int8_t_s_s((((g_66 == ((!0xEDL) < ((l_72 = l_71[3]) && 0x1030FACFL))) && ((l_47 < l_71[3]) == 0x47387092L)) < g_66), 1L)) < 1UL);
                (*l_75) = &g_74;
                if ((g_7 || (l_71[4] >= ((*l_64) = ((((0x96A4AF1292777EF5LL || (l_76 , (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((*l_73) >= ((g_61[1][1][2] || ((safe_add_func_int8_t_s_s(l_54.f1, 0xF4L)) | 0L)) && (*l_73))), 0x034EL)) <= l_47), g_7)), 65535UL)))) > 0x3C6AL) <= g_74) & (*l_73))))))
                { 
                    (*l_73) = (safe_mul_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((g_89 , 0UL), (g_89.f0 != (0x6C26CF9CL || (func_48((**l_75), g_89.f0) , l_90[1][4][6]))))) <= 1L) , &g_66) != (void*)0), (*l_73)));
                    return g_7;
                }
                else
                { 
                    return g_89.f0;
                }
            }
            else
            { 
                return (*p_46);
            }
        }
        else
        { 
            struct S1 l_94 = {0L,0x33L,6L};
            int32_t l_100 = (-4L);
            for (g_74 = 0; (g_74 >= 6); g_74 = safe_add_func_int32_t_s_s(g_74, 8))
            { 
                struct S1 l_93 = {0x84L,0x8CL,-1L};
                int32_t *l_95 = &g_96;
                int32_t l_97 = 0xD28FF552L;
                int32_t *l_98 = &l_97;
                int32_t *l_99 = &l_97;
                int32_t *l_101 = (void*)0;
                int32_t *l_102 = (void*)0;
                int32_t *l_103 = &g_96;
                int32_t *l_104[2][7][2] = {{{&l_97,&l_100},{&g_96,&g_96},{&l_100,&l_97},{(void*)0,&l_97},{&l_100,&g_96},{&g_96,&l_100},{&l_97,(void*)0}},{{&l_97,&l_100},{&g_96,&g_96},{&l_100,&l_97},{(void*)0,&l_100},{(void*)0,&g_3},{&g_3,(void*)0},{&l_100,&g_96}}};
                int i, j, k;
                l_94 = l_93;
                --g_106;
            }
        }
        g_127++;
    }
    else
    { 
        uint32_t *l_136[2];
        uint64_t *l_141 = &g_66;
        uint64_t *l_142 = (void*)0;
        int64_t *l_143 = &g_144;
        uint8_t *l_145[2][1][6];
        int32_t *l_146 = &g_74;
        struct S1 l_208 = {7L,250UL,0xB0L};
        uint64_t l_227 = 0UL;
        struct S1 **l_247 = &g_225;
        int64_t l_255 = 0L;
        struct S2 l_265 = {0xCC002028L,0xDD290F04B40D20FELL,18446744073709551610UL};
        uint16_t l_278 = 0UL;
        uint16_t *l_303 = &g_31;
        uint16_t *l_315 = &g_61[1][1][2];
        uint16_t *l_316 = &l_278;
        int32_t l_421 = 0xD14A2290L;
        union U3 l_434 = {4294967295UL};
        const struct S0 *l_457[4][5] = {{&l_447[1][2],&l_447[1][2],&l_447[0][1],&l_447[1][2],&l_447[1][2]},{&l_447[1][2],&l_447[1][2],&l_447[1][2],&l_447[1][2],&l_447[1][2]},{&l_447[1][2],&l_447[1][2],&l_447[1][2],&l_447[1][2],&l_447[1][2]},{&l_447[1][2],&l_447[1][2],&l_447[0][1],&l_447[1][2],&l_447[1][2]}};
        struct S1 * const *l_489 = (void*)0;
        struct S1 * const **l_488 = &l_489;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_136[i] = &g_89.f0;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_145[i][j][k] = &g_106;
            }
        }
        (*l_146) ^= (safe_mod_func_int32_t_s_s(((((*l_143) = (+(l_124 = ((g_89.f0 = ((safe_sub_func_int64_t_s_s((g_135 = l_125), g_61[0][2][0])) <= g_96)) , (g_137 , (~(((l_142 = ((+((+g_3) > ((*l_141) = l_90[1][4][6]))) , l_141)) != (void*)0) <= 0x1D9B9EA2DD67205CLL))))))) , &l_47) == l_145[0][0][1]), l_118));
lbl_428:
        for (g_106 = 0; (g_106 <= 1); g_106 += 1)
        { 
            uint32_t l_156[2];
            struct S2 l_179 = {0xD41626ACL,0xA9A96AD4EA75E2C0LL,4UL};
            int32_t l_180 = 0x1E84FFDCL;
            int32_t **l_182[6][1] = {{(void*)0},{&g_152[1]},{(void*)0},{&g_152[1]},{(void*)0},{&g_152[1]}};
            struct S1 *l_201[1];
            struct S0 l_203[4] = {{0x80131C0FDE11B9BBLL,18446744073709551615UL,0xE433L,18446744073709551611UL},{0x80131C0FDE11B9BBLL,18446744073709551615UL,0xE433L,18446744073709551611UL},{0x80131C0FDE11B9BBLL,18446744073709551615UL,0xE433L,18446744073709551611UL},{0x80131C0FDE11B9BBLL,18446744073709551615UL,0xE433L,18446744073709551611UL}};
            int32_t l_273 = 0L;
            int16_t l_274[3][6][4] = {{{(-5L),(-5L),0L,0x764AL},{(-5L),0x2EECL,9L,(-5L)},{2L,0x764AL,2L,9L},{0L,0x764AL,0L,(-5L)},{0x764AL,0x2EECL,0x2EECL,0x764AL},{2L,(-5L),0x2EECL,9L}},{{0x764AL,0L,0L,0L},{0L,0x2EECL,2L,0L},{2L,0L,9L,9L},{(-5L),(-5L),0L,0x764AL},{(-5L),0x2EECL,9L,(-5L)},{2L,0x764AL,2L,9L}},{{0L,0x764AL,0L,(-5L)},{0x764AL,0x2EECL,0x2EECL,0x764AL},{2L,(-5L),0x2EECL,9L},{0x764AL,0L,0L,0L},{0L,0x2EECL,2L,0L},{2L,0L,9L,9L}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_156[i] = 1UL;
            for (i = 0; i < 1; i++)
                l_201[i] = &g_137;
            if ((safe_mod_func_int64_t_s_s(((((l_90[1][4][6] | (((safe_sub_func_uint16_t_u_u((g_151 == (void*)0), (g_106 & (~(safe_rshift_func_uint8_t_u_u(l_156[0], 7)))))) != ((((safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((&g_66 == &g_66), l_156[0])) & l_156[0]), 0x85L)), (*l_146))) , l_141) == l_163[0][3][0]) > l_156[0])) != 0x9DD2L)) ^ l_156[0]) , l_164) != (void*)0), 18446744073709551615UL)))
            { 
                int32_t *l_174[5][4][7] = {{{&l_120,&g_74,&l_105,&l_123,&g_74,(void*)0,&l_118},{&l_124,(void*)0,&l_105,(void*)0,&l_105,(void*)0,&l_124},{&l_124,&g_74,&l_119,&g_3,(void*)0,(void*)0,&l_118},{&l_120,(void*)0,&l_105,&g_3,&l_105,(void*)0,(void*)0}},{{&l_118,(void*)0,&l_119,(void*)0,&g_74,&g_74,(void*)0},{&l_120,&g_74,&l_105,&l_123,&g_74,(void*)0,&l_118},{&l_124,(void*)0,&l_105,(void*)0,&l_105,(void*)0,&l_124},{&l_124,&g_74,&l_119,&g_3,(void*)0,(void*)0,&l_118}},{{&l_120,(void*)0,&l_105,&g_3,&l_105,(void*)0,(void*)0},{&l_118,(void*)0,&l_119,(void*)0,&g_74,&g_74,(void*)0},{&l_120,&g_74,&l_105,&l_123,&g_74,(void*)0,&l_118},{&l_124,(void*)0,&l_105,(void*)0,&l_105,&l_118,&g_3}},{{&g_3,&l_120,&l_124,&g_74,(void*)0,&l_118,&l_123},{(void*)0,&l_124,&g_74,&g_74,&g_3,&l_119,(void*)0},{&l_123,&l_124,&l_124,&g_3,(void*)0,&l_120,(void*)0},{(void*)0,&l_120,&g_3,&l_120,(void*)0,&l_119,&l_123}},{{&g_3,&l_118,&g_3,&g_3,&g_3,&l_118,&g_3},{&g_3,&l_120,&l_124,&g_74,(void*)0,&l_118,&l_123},{(void*)0,&l_124,&g_74,&g_74,&g_3,&l_119,(void*)0},{&l_123,&l_124,&l_124,&g_3,(void*)0,&l_120,(void*)0}}};
                struct S0 **l_185 = &g_184;
                struct S0 *l_187[2][6] = {{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188}};
                struct S0 **l_186 = &l_187[0][5];
                uint16_t *l_228[7][6][6] = {{{(void*)0,&g_31,&g_31,&g_61[1][3][0],&g_31,&g_31},{(void*)0,&g_31,&g_61[1][3][0],&g_31,&g_61[1][1][2],&g_31},{(void*)0,&g_61[1][1][2],(void*)0,&g_61[1][3][0],&g_61[1][1][2],&g_31},{(void*)0,&g_61[1][1][2],&g_31,&g_31,&g_31,(void*)0},{(void*)0,&g_61[1][1][2],&g_61[1][3][0],&g_61[1][3][0],&g_61[1][1][2],(void*)0},{(void*)0,&g_61[1][1][2],(void*)0,&g_31,&g_61[1][1][2],&g_61[1][3][0]}},{{(void*)0,&g_31,&g_31,&g_61[1][3][0],&g_31,&g_31},{(void*)0,&g_31,&g_61[1][3][0],&g_31,&g_61[1][1][2],&g_31},{(void*)0,&g_61[1][1][2],(void*)0,&g_61[1][3][0],&g_61[1][1][2],&g_31},{(void*)0,&g_61[1][1][2],&g_31,&g_31,&g_31,(void*)0},{(void*)0,&g_61[1][1][2],&g_61[1][3][0],&g_61[1][3][0],&g_61[1][1][2],(void*)0},{(void*)0,&g_61[1][1][2],(void*)0,&g_31,&g_61[1][1][2],&g_61[1][3][0]}},{{(void*)0,&g_31,&g_31,&g_61[1][3][0],&g_31,&g_31},{(void*)0,&g_31,&g_61[1][3][0],&g_31,&g_61[1][1][2],&g_31},{(void*)0,&g_61[1][1][2],(void*)0,&g_61[1][3][0],&g_61[1][1][2],&g_31},{(void*)0,&g_61[1][1][2],&g_31,&g_31,&g_31,(void*)0},{(void*)0,&g_61[1][1][2],&g_61[1][3][0],&g_61[1][3][0],&g_61[1][1][2],(void*)0},{(void*)0,&g_61[1][1][2],(void*)0,&g_31,&g_61[1][1][2],&g_61[1][3][0]}},{{(void*)0,&g_31,&g_31,&g_61[1][3][0],&g_31,&g_31},{(void*)0,&g_31,&g_61[1][3][0],&g_31,&g_61[1][1][2],&g_31},{&g_31,(void*)0,&g_61[3][1][0],&g_61[0][1][3],(void*)0,&g_61[1][1][1]},{&g_31,(void*)0,&g_61[2][3][2],&g_61[1][1][1],&g_31,&g_61[3][1][0]},{&g_31,&g_31,&g_61[0][1][3],&g_61[0][1][3],&g_31,&g_31},{&g_31,&g_31,&g_61[3][1][0],&g_61[1][1][1],(void*)0,&g_61[0][1][3]}},{{&g_31,&g_31,&g_61[2][3][2],&g_61[0][1][3],&g_31,&g_31},{&g_31,&g_61[1][3][0],&g_61[0][1][3],&g_61[1][1][1],&g_31,&g_61[2][3][2]},{&g_31,(void*)0,&g_61[3][1][0],&g_61[0][1][3],(void*)0,&g_61[1][1][1]},{&g_31,(void*)0,&g_61[2][3][2],&g_61[1][1][1],&g_31,&g_61[3][1][0]},{&g_31,&g_31,&g_61[0][1][3],&g_61[0][1][3],&g_31,&g_31},{&g_31,&g_31,&g_61[3][1][0],&g_61[1][1][1],(void*)0,&g_61[0][1][3]}},{{&g_31,&g_31,&g_61[2][3][2],&g_61[0][1][3],&g_31,&g_31},{&g_31,&g_61[1][3][0],&g_61[0][1][3],&g_61[1][1][1],&g_31,&g_61[2][3][2]},{&g_31,(void*)0,&g_61[3][1][0],&g_61[0][1][3],(void*)0,&g_61[1][1][1]},{&g_31,(void*)0,&g_61[2][3][2],&g_61[1][1][1],&g_31,&g_61[3][1][0]},{&g_31,&g_31,&g_61[0][1][3],&g_61[0][1][3],&g_31,&g_31},{&g_31,&g_31,&g_61[3][1][0],&g_61[1][1][1],(void*)0,&g_61[0][1][3]}},{{&g_31,&g_31,&g_61[2][3][2],&g_61[0][1][3],&g_31,&g_31},{&g_31,&g_61[1][3][0],&g_61[0][1][3],&g_61[1][1][1],&g_31,&g_61[2][3][2]},{&g_31,(void*)0,&g_61[3][1][0],&g_61[0][1][3],(void*)0,&g_61[1][1][1]},{&g_31,(void*)0,&g_61[2][3][2],&g_61[1][1][1],&g_31,&g_61[3][1][0]},{&g_31,&g_31,&g_61[0][1][3],&g_61[0][1][3],&g_31,&g_31},{&g_31,&g_31,&g_61[3][1][0],&g_61[1][1][1],(void*)0,&g_61[0][1][3]}}};
                uint32_t l_238 = 0x29F7BD2AL;
                int i, j, k;
                l_183 ^= ((((((((safe_div_func_uint16_t_u_u(g_7, (l_156[0] , (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((((0L | (+((safe_sub_func_uint32_t_u_u((((l_180 = (((void*)0 != l_174[3][3][5]) , ((safe_lshift_func_uint16_t_u_u(((((((safe_mul_func_uint16_t_u_u((((void*)0 == &l_174[0][0][5]) <= 6UL), (*l_146))) , l_179) , g_7) , (void*)0) != &g_144) , 0UL), 9)) > (*l_146)))) , g_181) < (-1L)), g_137.f0)) == (*l_146)))) != 246UL) , g_96), l_179.f1)), (*l_146)))))) && 1L) > 0x8241L) , g_121) , l_182[2][0]) != l_182[2][0]) < g_106) >= 0x7AL);
                if ((*p_46))
                    break;
                (*l_186) = ((*l_185) = g_184);
                if (((safe_sub_func_uint16_t_u_u(65535UL, ((l_125 = (((safe_mul_func_int8_t_s_s(0L, ((((*l_146) > ((1L || (g_96 && (((safe_lshift_func_uint8_t_u_u((l_179 , 0x0BL), (*l_146))) && 0xDA92CE884AA91B6ELL) ^ g_137.f1))) || g_188.f2)) == (*l_146)) >= g_66))) , l_90[1][4][6]) != (*p_46))) >= 0xB56AC2CDL))) > 0xEDL))
                { 
                    uint64_t l_198 = 0x65824EB29F0F0CF3LL;
                    l_195[0]--;
                    --l_198;
                    (*l_146) |= (*p_46);
                }
                else
                { 
                    struct S1 **l_202 = &l_201[0];
                    struct S0 l_204[6] = {{1L,1UL,0x50EAL,0x01576608L},{1L,1UL,0x50EAL,0x01576608L},{1L,1UL,0x50EAL,0x01576608L},{1L,1UL,0x50EAL,0x01576608L},{1L,1UL,0x50EAL,0x01576608L},{1L,1UL,0x50EAL,0x01576608L}};
                    int i;
                    (*l_202) = l_201[0];
                    (*l_146) = (*l_146);
                    l_204[4] = l_203[3];
                }
                if ((+(safe_lshift_func_int8_t_s_u(((l_208 , (safe_div_func_uint16_t_u_u((*l_146), (g_61[1][1][2] = (g_106 && (l_123 = (g_135 <= (safe_lshift_func_uint8_t_u_u((g_137.f1--), (safe_div_func_uint64_t_u_u(((*l_142) ^= (g_127 != ((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((0x486D1CC4FA711826LL & ((((void*)0 != g_225) , 0xCCL) > 0xB0L)) ^ 0x0B8471FBBC2940CFLL), 0)), 0x182E770EL)), g_7)) != 7UL) != l_227), g_188.f2)) && 0x2168D3E8L))), g_121))))))))))) && (*l_146)), g_31))))
                { 
                    (*l_146) = ((*l_146) != (l_105 != ((*l_146) , ((safe_mod_func_int32_t_s_s((&g_106 == (void*)0), (*p_46))) , ((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((g_226.f1 |= (safe_lshift_func_int16_t_s_s((l_237 < 0x70L), g_121))), 0x78L)), g_121)) , l_238)))));
                    (*l_146) = (safe_add_func_int8_t_s_s(g_89.f0, (safe_mod_func_uint64_t_u_u(0x9E89216C94C7D9CDLL, ((safe_lshift_func_uint8_t_u_s(g_127, 5)) & ((g_137.f1--) & g_144))))));
                    if ((*p_46))
                        break;
                }
                else
                { 
                    struct S1 ***l_248 = &l_247;
                    (*l_248) = l_247;
                }
            }
            else
            { 
                int8_t l_251[2];
                int32_t l_254 = 0xE2A97B3EL;
                int8_t *l_256 = &l_208.f0;
                int8_t *l_257[3];
                int32_t l_261 = (-4L);
                int i;
                for (i = 0; i < 2; i++)
                    l_251[i] = 0x2CL;
                for (i = 0; i < 3; i++)
                    l_257[i] = &l_251[1];
                l_261 = (((safe_add_func_uint8_t_u_u((*l_146), ((l_251[1] && ((safe_add_func_uint8_t_u_u((l_254 = l_237), (l_120 ^= ((*l_256) = l_255)))) , (safe_mod_func_int16_t_s_s(((l_260 , (((g_152[1] == (l_136[g_106] = g_152[1])) ^ (*l_146)) ^ g_61[1][1][2])) , 0x7404L), l_251[1])))) ^ (*l_146)))) < (-9L)) != 0x94L);
            }
            for (l_183 = 0; (l_183 <= 0); l_183 += 1)
            { 
                int16_t *l_266 = &g_188.f2;
                int16_t *l_270[7];
                uint16_t *l_275[3];
                int32_t l_277 = 0xF62972FCL;
                int i;
                for (i = 0; i < 7; i++)
                    l_270[i] = &l_237;
                for (i = 0; i < 3; i++)
                    l_275[i] = &g_61[3][2][1];
            }
        }
        if (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((*g_225) = l_298) , ((*l_316) = (((*l_146) = (safe_sub_func_int32_t_s_s(((*l_146) || (9UL != (safe_rshift_func_uint8_t_u_s((((*l_303)++) , (*l_146)), (*l_146))))), (safe_rshift_func_uint16_t_u_u(((((0x6CL >= (((~(safe_div_func_uint8_t_u_u((((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_315) ^= g_7), g_137.f2)), g_3)) >= (*l_146)) && 0xE85C3B9F427DD3A2LL) , l_265) , l_298.f1), g_226.f1))) && 1L) >= 0x3F4CL)) >= (*l_146)) && 0x2BD0L) || g_135), (*l_146)))))) != g_66))), 14)), 1UL)) >= 65534UL))
        { 
            int32_t *l_317 = (void*)0;
            int8_t * const *l_352 = &l_334[4];
            int32_t l_400 = 0xCE03B84FL;
            int32_t l_420 = (-7L);
            uint64_t l_423 = 0xD937E26A3DC60F20LL;
            (*l_164) = l_317;
            for (l_262.f1 = 0; (l_262.f1 <= 0); l_262.f1 += 1)
            { 
                uint16_t *l_342 = &g_61[1][4][0];
                int32_t l_344 = 0L;
                int32_t l_345 = (-1L);
                int32_t *l_354 = &l_123;
                uint32_t l_397[3][4] = {{2UL,2UL,2UL,2UL},{2UL,2UL,2UL,2UL},{2UL,2UL,2UL,2UL}};
                int32_t l_422 = 2L;
                int i, j;
                for (l_255 = 0; (l_255 <= 0); l_255 += 1)
                { 
                    int8_t **l_333 = &l_332;
                    int8_t **l_335 = &l_334[2];
                    int16_t *l_343 = &l_237;
                    int i;
                    l_345 |= (l_195[l_255] && (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s((~(safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(0xEFL)), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((*l_333) = l_332) != ((*l_335) = l_334[4])), (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(0x67EAL, 6)), (safe_div_func_uint8_t_u_u(((((*l_343) = ((&g_61[1][1][2] != l_342) | (*l_146))) , l_344) ^ 2UL), (-4L))))))), (*l_146)))))), g_188.f0)), (*l_146))), 0x61L)));
                    g_225 = &l_262;
                }
                (*l_354) |= ((*l_146) = ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((l_195[l_262.f1] >= (l_345 = (l_265 , (((((-2L) > ((safe_rshift_func_int16_t_s_s(((l_352 == (void*)0) <= (((**l_352) ^= (((*l_146) != l_195[l_262.f1]) <= g_188.f1)) , (*l_146))), l_353)) > g_188.f3)) & g_96) == 0x508DL) || (*l_146))))) , g_144), l_344)), l_344)) == g_188.f0));
                (*l_164) = (((*l_146) | (g_137.f1 = (((-3L) > ((safe_mul_func_uint16_t_u_u((((g_226.f2 > g_106) ^ (g_74 > (safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(g_226.f2, (((*l_146) != (*l_146)) | (-1L)))), g_226.f0)))) | (*l_354)), l_122)) || 0x7CDCL)) , (*l_146)))) , (void*)0);
                if ((((((void*)0 != l_352) <= ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_121, (safe_mul_func_uint8_t_u_u(g_106, 255UL)))), (((l_90[1][4][6] != (((g_226.f2 || (*l_354)) & (*l_354)) != g_74)) != 65530UL) , (*l_146)))) || g_61[3][4][3])) < g_137.f2) , 0x3BCCBEA5L))
                { 
                    union U3 *l_370 = (void*)0;
                    union U3 **l_369 = &l_370;
                    int32_t l_385 = (-5L);
                    int32_t *l_388 = (void*)0;
                    int32_t l_389 = 0x728610AEL;
                    int32_t *l_390 = &g_96;
                    int32_t *l_391 = &l_344;
                    int32_t *l_392 = &l_385;
                    int32_t *l_393 = &l_276;
                    int32_t *l_394 = (void*)0;
                    int32_t *l_395 = &l_389;
                    int32_t *l_396[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_396[i] = &l_345;
                    (*l_369) = (void*)0;
                    l_389 |= (safe_sub_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(l_123, (g_89.f0 = (((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_89.f0, ((safe_rshift_func_int8_t_s_u(((0x98L < (0xD679L != (safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((l_385 , (safe_div_func_uint32_t_u_u(((((*l_146) > g_3) || g_188.f3) , (*l_354)), g_66))), g_137.f0)), 10)))) || 0xB2L), (*l_146))) & (*l_354)))), 0x428BL)) , &p_46) == &g_152[1])))) ^ 0UL), l_385));
                    l_397[2][3]--;
                }
                else
                { 
                    (*l_146) ^= (*p_46);
                    return (*p_46);
                }
            }
        }
        else
        { 
            const struct S1 *l_430 = &l_262;
            const struct S1 **l_429 = &l_430;
            struct S2 l_433 = {0xC18CD631L,0UL,1UL};
            int32_t *l_437[1][3][7] = {{{(void*)0,&g_3,(void*)0,&l_276,&g_3,&l_123,&l_123},{&g_3,&l_126,&l_276,&l_126,&g_3,&l_276,&l_120},{&l_120,&l_123,&l_276,&l_120,&l_276,&l_123,&l_120}}};
            uint32_t *l_438 = (void*)0;
            uint32_t *l_439 = &g_188.f1;
            struct S1 *l_442 = &l_298;
            union U3 *l_445 = &l_260;
            uint32_t l_456[6] = {0x7ABCD14DL,0x7F15121DL,0x7ABCD14DL,0x7ABCD14DL,0x7F15121DL,0x7ABCD14DL};
            int8_t l_463 = 0xFCL;
            int64_t l_478 = 0x352B671170267675LL;
            int i, j, k;
            for (g_96 = (-9); (g_96 >= 25); g_96++)
            { 
                if (g_3)
                    goto lbl_428;
            }
            l_429 = l_429;
            (*l_146) = (safe_sub_func_uint8_t_u_u((l_433 , (((func_48((*l_146), ((l_434 , (((safe_add_func_uint16_t_u_u(0x0BBEL, ((((l_421 = 0xF294EC9EL) , ((*l_439)++)) , &g_137) != ((**l_413) = l_442)))) & (*p_46)) != (*l_146))) <= g_66)) , (void*)0) == (void*)0) | g_137.f2)), 1UL));
            for (g_226.f2 = 0; (g_226.f2 <= 28); ++g_226.f2)
            { 
                uint16_t l_449[2][1][5] = {{{0x5ACCL,0x9AE6L,0x5ACCL,0x9AE6L,0x5ACCL}},{{8UL,8UL,8UL,8UL,8UL}}};
                int32_t l_464 = 0L;
                int i, j, k;
                g_446[1] = l_445;
                if ((*p_46))
                { 
                    struct S0 *l_448 = &l_447[1][2];
                    (*l_448) = l_447[1][2];
                    if ((*p_46))
                        break;
                }
                else
                { 
                    const uint64_t l_460 = 0x1518E6C9AA88BACELL;
                    ++l_449[1][0][2];
                    l_464 = (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*g_289) == (l_456[1] , l_457[0][1])), 5)), (((*l_146) |= ((safe_add_func_uint16_t_u_u(((l_460 , (((0x7AF57389E73C5FE0LL && (((((void*)0 == &l_449[1][0][2]) != (*p_46)) >= g_7) < l_463)) != g_144) < 7UL)) | g_226.f2), l_460)) && g_31)) ^ (*p_46))));
                }
                (*l_146) ^= (*p_46);
                for (g_181 = (-19); (g_181 == 13); ++g_181)
                { 
                    (*g_151) = (*l_164);
                    if ((*p_46))
                        continue;
                    (*l_164) = (*g_151);
                }
                if (((*l_146) = (p_46 == (((g_469 , (l_260 , l_120)) & ((((*l_146) ^ l_470) != (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((!0xDDE7L) , g_74), l_449[0][0][3])), l_478)), (*l_146)))) > g_469.f0)) , (*g_151)))))
                { 
                    struct S2 *l_479 = &g_469;
                    struct S2 **l_480[4] = {&l_479,&l_479,&l_479,&l_479};
                    int i;
                    l_481 = l_479;
                    return (*p_46);
                }
                else
                { 
                    const uint32_t l_496 = 0x3D3BFA65L;
                    int16_t *l_497 = &g_188.f2;
                    (*l_146) |= ((&g_446[0] == l_483[2]) < (((*l_497) = ((((safe_mul_func_uint8_t_u_u((g_226.f1 = (safe_add_func_uint16_t_u_u(((l_490 = l_488) != g_412), ((safe_rshift_func_uint16_t_u_s((~(safe_sub_func_uint32_t_u_u(((void*)0 == &g_89), (*p_46)))), 13)) < l_464)))), l_496)) < (*p_46)) ^ 0UL) <= l_496)) < l_464));
                }
            }
            g_446[1] = (l_445 = &l_434);
        }
    }
lbl_900:
    for (g_144 = 1; (g_144 <= 4); g_144 += 1)
    { 
        uint32_t l_500 = 0x7CA4A9BBL;
        for (l_298.f0 = 0; (l_298.f0 <= 0); l_298.f0 += 1)
        { 
            uint16_t *l_511 = &g_61[3][3][1];
            uint32_t *l_514[3][3] = {{&l_195[0],&l_260.f0,&l_260.f0},{&l_195[0],&l_260.f0,&l_260.f0},{&l_195[0],&l_260.f0,&l_260.f0}};
            int32_t l_515[2];
            int32_t *l_516 = &l_124;
            const int32_t *l_518 = &l_119;
            const int32_t **l_517 = &l_518;
            int i, j;
            for (i = 0; i < 2; i++)
                l_515[i] = 0x3A75E27EL;
            (*l_516) |= (safe_add_func_uint8_t_u_u(l_195[l_298.f0], ((l_500 | (-5L)) , ((l_195[l_298.f0] && ((g_137.f2 = g_482.f0) > 0x34L)) > (safe_mod_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((++(*l_511)) >= ((l_515[0] = g_226.f0) == (*p_46))), l_500)), 1UL)), g_144)) ^ g_135), l_195[l_298.f0])) > 0x77D7B087L), g_121))))));
            (*l_517) = p_46;
        }
    }
    (*l_521) &= (safe_lshift_func_int8_t_s_s(l_262.f1, g_121));
    if ((*p_46))
    { 
        union U3 l_524 = {4294967294UL};
        int64_t l_541 = 1L;
        union U3 l_555 = {4294967291UL};
        int32_t l_564 = 1L;
        uint32_t *l_568[6] = {&g_188.f3,&g_188.f3,&g_188.f3,&g_188.f3,&g_188.f3,&g_188.f3};
        struct S1 l_571 = {2L,0xD8L,0x2CL};
        int32_t l_578[7][5][3] = {{{(-7L),1L,1L},{0xFEF3958FL,0x31B78876L,3L},{0xCBFDEE67L,0x31B78876L,0x2D56F13DL},{1L,1L,0x083807D5L},{0L,0x31B78876L,8L}},{{1L,0x31B78876L,0x31B78876L},{0x9E4DDE8DL,1L,(-1L)},{0L,0x31B78876L,0x787C3A73L},{0xF7D57FF1L,0x31B78876L,1L},{(-7L),1L,1L}},{{0xFEF3958FL,0x31B78876L,3L},{0xCBFDEE67L,0x31B78876L,0x2D56F13DL},{1L,1L,0x083807D5L},{0L,0x31B78876L,8L},{1L,0x31B78876L,0x31B78876L}},{{0x9E4DDE8DL,1L,(-1L)},{0L,0x31B78876L,0x787C3A73L},{0xF7D57FF1L,0x31B78876L,1L},{(-7L),1L,1L},{0xFEF3958FL,0x31B78876L,3L}},{{0xCBFDEE67L,0x31B78876L,0x2D56F13DL},{1L,1L,0x083807D5L},{0L,0x31B78876L,8L},{1L,0x31B78876L,0x31B78876L},{0x9E4DDE8DL,1L,(-1L)}},{{0L,0x31B78876L,0x787C3A73L},{0xF7D57FF1L,0x31B78876L,1L},{(-7L),1L,1L},{0xFEF3958FL,0x31B78876L,3L},{0xCBFDEE67L,0x31B78876L,0x2D56F13DL}},{{1L,1L,0x083807D5L},{0L,0x31B78876L,8L},{1L,0x31B78876L,0x31B78876L},{0x9E4DDE8DL,1L,(-1L)},{0L,0x31B78876L,0x787C3A73L}}};
        int8_t l_580 = 7L;
        uint32_t l_583 = 0xC343BA87L;
        struct S1 *l_598 = (void*)0;
        struct S1 *l_599 = &g_137;
        int8_t *l_607[1][1];
        int64_t l_620 = 0x2C689F353B80B1B9LL;
        int32_t l_621 = 0L;
        union U3 *l_632 = &l_260;
        int32_t *l_637 = &g_74;
        uint8_t *l_641[4][4][2] = {{{&g_226.f1,&g_106},{(void*)0,&g_106},{&g_226.f1,&g_106},{(void*)0,&g_106}},{{&g_226.f1,&g_106},{(void*)0,&g_106},{&g_226.f1,&g_106},{(void*)0,&g_106}},{{&g_226.f1,&g_106},{(void*)0,&g_106},{&g_226.f1,&g_106},{(void*)0,&g_106}},{{&g_226.f1,&g_106},{(void*)0,&g_106},{&g_226.f1,&g_106},{(void*)0,&g_106}}};
        int64_t *l_656 = &g_188.f0;
        int16_t *l_657 = &g_577;
        uint32_t *l_658 = (void*)0;
        uint32_t *l_659[6][6][2] = {{{&l_555.f0,&l_555.f0},{&l_260.f0,&l_555.f0},{&l_555.f0,&l_524.f0},{&l_555.f0,&g_89.f0},{&l_524.f0,&g_89.f0},{&l_555.f0,&l_524.f0}},{{&l_555.f0,&l_555.f0},{&l_260.f0,&l_555.f0},{&l_555.f0,&l_555.f0},{&l_555.f0,&g_89.f0},{&l_555.f0,&l_555.f0},{&l_555.f0,&l_260.f0}},{{&l_555.f0,&l_555.f0},{&l_555.f0,&g_89.f0},{&l_555.f0,&l_555.f0},{&l_555.f0,&l_555.f0},{&l_260.f0,&l_555.f0},{&l_555.f0,&l_524.f0}},{{&l_555.f0,&g_89.f0},{&l_524.f0,&l_260.f0},{&g_89.f0,(void*)0},{&l_524.f0,&l_524.f0},{(void*)0,&l_555.f0},{&g_89.f0,&l_195[0]}},{{&l_555.f0,&l_260.f0},{&l_524.f0,&l_555.f0},{&l_524.f0,(void*)0},{&l_524.f0,&l_555.f0},{&l_524.f0,&l_260.f0},{&l_555.f0,&l_195[0]}},{{&g_89.f0,&l_555.f0},{(void*)0,&l_524.f0},{&l_524.f0,(void*)0},{&g_89.f0,&l_260.f0},{(void*)0,&l_260.f0},{&g_89.f0,(void*)0}}};
        int32_t *l_661 = (void*)0;
        int32_t *l_662 = &l_118;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_607[i][j] = (void*)0;
        }
        if (((*l_521) = (safe_add_func_int8_t_s_s(5L, (g_226.f0 && ((l_524 = l_524) , (safe_sub_func_int64_t_s_s(((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((safe_mod_func_uint64_t_u_u(((((*p_46) == ((l_524 , (safe_div_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(0x1DL, (safe_sub_func_int16_t_s_s(((((safe_div_func_int64_t_s_s(g_469.f0, (-1L))) , 0x40L) || 0x0CL) ^ 8L), g_66)))) , (*p_46)) && (*p_46)), (-1L)))) & (-1L))) , 0x3A6F66E02A547C62LL) == (*l_521)), (-8L))) | l_541) && 0x2811L), 1)), 0xFABB8BA3L)) > (-5L)), l_541))))))))
        { 
            int32_t *l_542 = &l_126;
            (*l_542) ^= (*l_521);
        }
        else
        { 
            const union U3 ****l_546 = &g_543;
            (*l_546) = g_543;
        }
        if ((((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(0x6170L, 13)) , l_541) && (safe_div_func_int16_t_s_s(7L, l_524.f0))), 1)) == (safe_div_func_uint64_t_u_u(((l_555 = l_524) , (&l_483[2] != &g_544)), l_541))) || (*p_46)))
        { 
            struct S1 l_567 = {-1L,255UL,0x0BL};
            int32_t *l_572 = &l_123;
            int32_t *l_573 = &l_124;
            int32_t *l_574 = &l_276;
            int32_t *l_575 = (void*)0;
            int32_t *l_576[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (l_262.f1 = 0; (l_262.f1 <= 1); l_262.f1 += 1)
            { 
                return (*p_46);
            }
            l_564 ^= ((*l_521) &= (((g_31 & ((void*)0 != &g_544)) , ((safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(((g_482.f1--) > ((l_567 , &g_7) != l_568[1])), (((safe_mod_func_int8_t_s_s((g_121 ^ g_181), 0x2BL)) == l_567.f2) , g_226.f0))) < 0xD4F77B1D39F7D08DLL), g_188.f0)) <= 0x2FC8L)) < l_567.f1));
            (***l_413) = l_571;
            l_583--;
        }
        else
        { 
            int32_t *l_588 = &l_579;
            (*l_588) &= ((*l_521) & ((void*)0 != l_521));
            (*g_289) = &l_447[1][2];
        }
        for (g_188.f1 = 9; (g_188.f1 == 9); g_188.f1 = safe_add_func_uint32_t_u_u(g_188.f1, 7))
        { 
            uint8_t *l_604[6][7];
            int32_t l_608 = 5L;
            int32_t *l_609 = &l_564;
            int32_t *l_610 = &l_119;
            int32_t *l_611 = &l_125;
            int32_t l_612 = 0L;
            int32_t *l_613 = &l_120;
            int32_t *l_614[2][4] = {{&l_120,&l_120,&l_120,&l_120},{&l_120,&l_120,&l_120,&l_120}};
            uint64_t l_615 = 7UL;
            int16_t l_622 = 0x3610L;
            uint32_t l_623 = 0UL;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 7; j++)
                    l_604[i][j] = &g_226.f1;
            }
            (*l_609) |= ((*l_521) = (safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(0xB0L)), (((((safe_add_func_uint32_t_u_u((*l_521), (safe_div_func_int64_t_s_s(((l_598 != l_599) , ((0x6878L == (safe_div_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((g_106++) , ((g_469 , l_607[0][0]) != (void*)0)), l_583)) < g_188.f0), l_608))) > l_608)), 0x2199AAE679CA122ALL)))) | 3UL) != g_226.f2) , &g_137) == &l_571))));
            l_615++;
            for (l_298.f1 = 0; (l_298.f1 <= 52); ++l_298.f1)
            { 
                (*l_613) ^= l_620;
            }
            l_623++;
        }
        (*l_521) = (((((((((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_s((((l_632 = &l_524) == (**g_543)) < (l_580 != g_469.f0)), 14)) < ((safe_mul_func_int8_t_s_s((9L == ((safe_add_func_uint64_t_u_u((l_578[6][4][0] = (l_555 , ((((*l_164) = (*g_151)) != (void*)0) < g_89.f0))), g_562)) , 250UL)), (*l_521))) || g_127)) | (*l_521)), g_137.f1)), l_564)) && g_577) , l_580) > 6L) > 0xA0B1FB4913EB669ALL) == g_127) & (*p_46)) | g_3) != (*p_46));
        (*l_662) &= ((l_637 == p_46) & ((+(*l_521)) , (((safe_add_func_uint8_t_u_u(((*l_521) = (*l_637)), ((*l_332) = (safe_lshift_func_uint8_t_u_s((l_621 = ((safe_lshift_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u((g_89.f0 |= (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(g_135, (safe_sub_func_int16_t_s_s(((((*l_657) = ((*l_599) , ((g_144 ^= ((*l_656) &= (safe_mul_func_uint8_t_u_u((1L ^ l_524.f0), 0x5CL)))) < 0xCAEA7A252EA9A7E6LL))) & g_226.f1) , g_144), l_580)))), g_137.f0))), g_135)) , g_660) != (void*)0) == l_298.f0), 13)) && (*p_46))), 2))))) , 1L) && (*g_660))));
    }
    else
    { 
        union U3 l_664 = {8UL};
        uint8_t *l_679 = &l_269;
        uint64_t l_680 = 18446744073709551615UL;
        struct S0 l_681 = {1L,3UL,-6L,18446744073709551607UL};
        int32_t l_706 = 0x6CF80DFFL;
        int32_t l_707 = 0x07470CB9L;
        int32_t l_708[7] = {0x55082098L,0x55082098L,(-1L),0x55082098L,0x55082098L,(-1L),0x55082098L};
        union U3 **l_725 = &g_446[1];
        uint16_t * const l_767 = &g_61[0][1][0];
        int16_t l_808 = 9L;
        struct S1 l_820 = {-1L,0x53L,0x6BL};
        int i;
lbl_837:
        if ((safe_unary_minus_func_uint16_t_u(((l_664 , ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((g_66 , ((*l_679) = (safe_lshift_func_int8_t_s_u((g_181 < (&g_562 != (void*)0)), ((safe_mod_func_uint8_t_u_u((*l_521), (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*g_660) |= (*l_521)), g_226.f0)), g_137.f0)), l_664.f0)))) < l_664.f0))))), 5)), g_74)) <= g_482.f0)) , l_680))))
        { 
            union U3 l_682 = {9UL};
            int32_t l_696 = 0x14E7CB12L;
            int32_t l_697 = 0L;
            int8_t l_705[7][6][3] = {{{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L}},{{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L}},{{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L}},{{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L}},{{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L}},{{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L}},{{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L},{0x9CL,0x9CL,0x9CL},{2L,2L,2L}}};
            int32_t l_710[3];
            uint8_t *l_717 = &l_269;
            union U3 ***l_731 = &l_725;
            union U3 *** const *l_730 = &l_731;
            union U3 *** const **l_732[7];
            uint32_t *l_739 = &l_195[0];
            int16_t *l_744 = &l_681.f2;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_710[i] = 0L;
            for (i = 0; i < 7; i++)
                l_732[i] = &l_730;
            for (g_226.f1 = 0; (g_226.f1 <= 4); g_226.f1 += 1)
            { 
                struct S0 *l_683 = &g_188;
                int32_t l_694 = 0xC3732A69L;
                int32_t l_709 = (-1L);
                int32_t l_711 = 2L;
                int16_t *l_724[2];
                int32_t **l_729 = &l_521;
                int i;
                for (i = 0; i < 2; i++)
                    l_724[i] = &g_135;
                (*l_683) = (l_681 , (l_682 , func_48(l_681.f3, g_74)));
            }
            g_733 = l_730;
            (*l_521) ^= (l_680 > l_681.f0);
            l_710[2] = (((*l_739) ^= (safe_rshift_func_uint16_t_u_u(g_738, 0))) > ((*l_521) = ((*l_521) ^ (((l_682.f0 == (((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_744) = 1L), 65535UL)), 9)) , (*g_733)) == (*g_733))) >= g_188.f0) & (*l_521)))));
        }
        else
        { 
            int32_t **l_747 = &l_521;
            struct S1 l_771 = {0x1CL,0xACL,-2L};
            struct S2 l_790 = {0x66B2FFB9L,8UL,0x93DE0978L};
            int32_t l_807[3][3] = {{5L,5L,5L},{(-5L),(-5L),(-5L)},{5L,5L,5L}};
            struct S1 ***l_832 = &l_414;
            int64_t * const l_834 = &l_447[1][2].f0;
            int64_t *l_835 = &l_447[1][2].f0;
            int64_t **l_836 = &l_835;
            int i, j;
            if ((safe_sub_func_uint32_t_u_u((((*l_521) , (g_151 = l_747)) != (void*)0), (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(((*g_660) >= ((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((g_226.f1 < (safe_div_func_int64_t_s_s(l_681.f0, 0x49424387DB898559LL))) <= g_106), (*l_521))), (**l_747))) , l_681.f2)), (*l_521))), l_681.f1)))))
            { 
                uint8_t l_758[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_758[i] = 0UL;
                (**l_747) &= l_708[0];
                (**l_747) ^= (0x4FL <= l_758[1]);
            }
            else
            { 
                uint32_t l_770 = 0UL;
                int64_t *l_780 = &l_681.f0;
                int8_t l_791 = 0xC3L;
                int16_t *l_792[2][6][3] = {{{&g_135,&g_121,&l_447[1][2].f2},{&l_581[2],&l_581[2],&g_121},{&l_447[1][2].f2,&g_121,&g_121},{&g_121,&g_135,&l_447[1][2].f2},{&l_447[1][2].f2,&g_135,&l_447[1][2].f2},{&l_581[2],&g_121,&l_447[1][2].f2}},{{&l_581[2],&l_581[2],&g_121},{&l_447[1][2].f2,&g_121,&g_121},{&g_121,&g_135,&l_447[1][2].f2},{&l_447[1][2].f2,&g_135,&l_447[1][2].f2},{&l_581[2],&g_121,&l_447[1][2].f2},{&l_581[2],&l_581[2],&g_121}}};
                int32_t l_793 = (-1L);
                int32_t *l_794 = &l_123;
                int32_t *l_795 = &l_708[5];
                int32_t *l_796 = &l_124;
                int32_t *l_797 = (void*)0;
                int32_t *l_798 = &l_126;
                int32_t *l_799 = &l_125;
                int32_t *l_800 = &l_125;
                int32_t *l_801 = &l_708[1];
                int32_t *l_802 = &l_119;
                int32_t *l_803 = &l_126;
                int32_t *l_804 = &l_124;
                int32_t *l_805[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_805[i] = &l_276;
                (**l_414) = (((**g_151) == (safe_mul_func_int8_t_s_s(((*l_332) = (safe_mul_func_int16_t_s_s((0x88B513F6L != (((((safe_lshift_func_uint8_t_u_s(g_135, (safe_sub_func_uint16_t_u_u(((&g_61[0][4][3] == l_767) , (65535UL <= (((safe_sub_func_uint64_t_u_u((l_708[0] = (l_770 = (g_482.f1 = g_137.f0))), 0xB32C131B075E6301LL)) >= (*l_521)) ^ 4294967295UL))), g_738)))) >= 0xA4F6L) != g_482.f2) ^ (**l_747)) & (*l_521))), 65535UL))), 7UL))) , l_771);
                p_46 = ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((**l_747), (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(((*l_780) = l_770), ((safe_div_func_int8_t_s_s(0x1DL, (safe_unary_minus_func_int8_t_s(l_770)))) , (g_66 ^= (safe_rshift_func_uint8_t_u_u(((((l_793 = ((safe_sub_func_int64_t_s_s(((**l_747) >= l_770), ((safe_add_func_uint64_t_u_u((((l_790 , l_770) , l_664.f0) | l_791), g_226.f2)) < l_681.f2))) & l_681.f3)) , (*g_225)) , 65535UL) , (**l_747)), 6)))))), g_106)))), 254UL)) , (void*)0);
                ++g_809;
            }
            for (g_137.f2 = 0; (g_137.f2 != 10); ++g_137.f2)
            { 
                struct S0 *l_816 = &l_681;
                int32_t l_817 = 0x753C2CE7L;
                int32_t l_833[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_833[i] = 1L;
                l_833[1] &= (3UL >= ((safe_add_func_uint8_t_u_u(((((((*g_289) = (l_816 = &l_447[1][2])) != (void*)0) & l_817) >= (((safe_add_func_int32_t_s_s(((l_820 , ((~(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((l_681.f3 , ((1UL < g_226.f0) > g_482.f0)), l_817)), 18446744073709551615UL)), (**l_747))), (-3L))), 2)) && (**l_747)) < 3L)) , l_832)) != g_412), l_664.f0)) & 0xEEL) != 0x6C4764068D047C0ALL)) , (**l_747)), g_61[1][4][2])) , 255UL));
                return (**g_151);
            }
            (**g_151) ^= (l_834 == ((*l_836) = l_835));
            if (g_96)
                goto lbl_837;
        }
        return l_680;
    }
    for (l_269 = 0; (l_269 <= 0); l_269 += 1)
    { 
        int64_t ***l_838 = (void*)0;
        int64_t ***l_839[2];
        int32_t l_844[2];
        uint16_t *l_846 = &g_61[2][2][0];
        struct S1 l_847 = {0x49L,0x16L,-5L};
        struct S1 **l_849 = &g_225;
        int32_t l_899 = (-1L);
        int32_t l_915 = 2L;
        int32_t l_918 = (-5L);
        int32_t *l_924 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_839[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_844[i] = 0xB0F55EF1L;
        (*l_521) ^= ((((g_842 = (l_840[0][0] = (void*)0)) == (void*)0) < (*p_46)) & (0x4D7BBE1A70D0CEAFLL != g_226.f0));
        if (l_844[1])
        { 
            uint32_t l_845 = 0x18558CEEL;
            if (l_845)
                break;
            if ((*p_46))
                break;
        }
        else
        { 
            struct S1 **l_848[2][7][4] = {{{(void*)0,&g_225,&g_225,(void*)0},{&g_225,(void*)0,&g_225,&g_225},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_225,&g_225,(void*)0},{&g_225,(void*)0,&g_225,&g_225},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_225,&g_225,(void*)0}},{{&g_225,(void*)0,&g_225,&g_225},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_225,&g_225,(void*)0},{&g_225,(void*)0,&g_225,&g_225},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_225,&g_225,(void*)0},{&g_225,(void*)0,&g_225,&g_225}}};
            int32_t l_856 = 0x0237EDEAL;
            int i, j, k;
            if (((g_660 = l_846) != l_846))
            { 
                uint8_t l_859 = 247UL;
                (*l_521) = (((((l_847 = (***l_413)) , l_848[1][1][2]) != (l_849 = l_849)) < (-4L)) > ((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(4L, l_856)), ((*l_332) |= ((safe_lshift_func_uint8_t_u_s((l_856 || 254UL), l_856)) && 9UL)))), l_859)) , g_137.f1));
                (*l_521) &= (l_844[0] = 0x2E6372BCL);
                return l_859;
            }
            else
            { 
                uint32_t l_860 = 4294967286UL;
                const union U3 l_861 = {1UL};
                (*l_521) ^= (((l_860 >= ((l_861 , (void*)0) == ((safe_add_func_int8_t_s_s(l_860, g_121)) , &l_849))) | (-7L)) >= g_127);
            }
            return (*l_521);
        }
        for (g_806 = 3; (g_806 >= 0); g_806 -= 1)
        { 
            int8_t l_866 = 0x2FL;
            int16_t *l_867 = (void*)0;
            union U3 l_878 = {0x6FBE607DL};
            int32_t l_906 = 0xED1D428CL;
            int32_t l_908[5][3] = {{0x5DFFE5F3L,0x5DFFE5F3L,0x5DFFE5F3L},{1L,1L,1L},{0x5DFFE5F3L,0x5DFFE5F3L,0x5DFFE5F3L},{1L,1L,1L},{0x5DFFE5F3L,0x5DFFE5F3L,0x5DFFE5F3L}};
            union U3 *** const *l_995 = &g_734;
            int i, j;
            if ((safe_lshift_func_uint8_t_u_s(l_866, ((l_866 < l_847.f2) != (l_846 != l_867)))))
            { 
                int32_t l_868 = 7L;
                int32_t l_898[5][5][2] = {{{0xCF70293FL,0xAE4D5845L},{(-1L),0xCF70293FL},{0xAE4D5845L,0x21416D07L},{0xAE4D5845L,0xCF70293FL},{(-1L),0xAE4D5845L}},{{0xCF70293FL,0x21416D07L},{4L,4L},{(-1L),4L},{4L,0x21416D07L},{0xCF70293FL,0xAE4D5845L}},{{(-1L),0xCF70293FL},{0xAE4D5845L,0x21416D07L},{0xAE4D5845L,0xCF70293FL},{(-1L),0xAE4D5845L},{0xCF70293FL,0x21416D07L}},{{4L,4L},{(-1L),4L},{4L,0x21416D07L},{0xCF70293FL,0xAE4D5845L},{(-1L),0xCF70293FL}},{{0xAE4D5845L,0x21416D07L},{0xAE4D5845L,0xCF70293FL},{(-1L),0xAE4D5845L},{0xCF70293FL,0x21416D07L},{4L,4L}}};
                int i, j, k;
                if (((*l_521) = 0x6FCAA8EAL))
                { 
                    (*l_521) = (*p_46);
                    if (l_866)
                        continue;
                    if (l_868)
                        continue;
                    (*g_151) = (*g_151);
                }
                else
                { 
                    int8_t l_877[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_877[i] = (-1L);
                    l_899 |= (((((l_844[1] = (safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(g_181, (l_868 = (safe_rshift_func_uint16_t_u_s(0x588BL, l_877[0]))))) || ((l_878 , ((safe_unary_minus_func_int64_t_s(0x03F83102320FF821LL)) ^ ((safe_div_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((((safe_div_func_int16_t_s_s(((*l_521) != g_74), 0x2204L)) , 3UL) >= 4294967286UL) > l_847.f1), 0x0A03960CD945D7A6LL)), l_877[0])), 4UL)), l_844[1])), g_135)) && g_96), g_144)), 12)) < l_866) < 0L) && l_898[2][3][0]), g_482.f2)) < 18446744073709551610UL))) | l_898[2][3][0])), g_482.f0)) ^ g_74), g_562))) | (*l_521)) < 0UL) & l_878.f0) , l_877[0]);
                }
            }
            else
            { 
                int64_t l_907 = 0xD802088E5E9FBAE8LL;
                int32_t l_909[6][1][5] = {{{0L,3L,0x0DEF7627L,0xE5B1CC0DL,0x0DEF7627L}},{{0x0DEF7627L,0x0DEF7627L,0L,0xE5B1CC0DL,(-1L)}},{{3L,0L,0L,3L,0x0DEF7627L}},{{3L,0xE5B1CC0DL,0xEF883C20L,0xEF883C20L,0xE5B1CC0DL}},{{0x0DEF7627L,0L,0xEF883C20L,0L,0L}},{{0L,0x0DEF7627L,0L,0xEF883C20L,0L}}};
                int i, j, k;
                for (g_31 = 0; g_31 < 5; g_31 += 1)
                {
                    l_334[g_31] = &g_562;
                }
                if (l_183)
                    goto lbl_900;
                for (g_562 = 0; (g_562 <= 0); g_562 += 1)
                { 
                    int i, j, k;
                    l_563[(g_806 + 1)][l_269][(g_562 + 1)] = ((((l_563[(g_562 + 4)][l_269][(l_269 + 1)] || g_61[(l_269 + 2)][g_806][g_806]) > l_878.f0) && g_127) != 0x96L);
                    if (l_126)
                        goto lbl_901;
                }
                for (l_847.f0 = 2; (l_847.f0 != (-2)); --l_847.f0)
                { 
                    int32_t *l_904 = &l_844[1];
                    int32_t *l_905[7][7] = {{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124},{&l_124,&l_124,&l_124,&l_124,&l_124,&l_124,&l_124}};
                    int32_t l_910 = 0xEA0CA915L;
                    int32_t l_916 = 0x6E091911L;
                    int32_t l_917 = 0xF9AC8DBBL;
                    uint16_t l_919 = 0xD9C8L;
                    int i, j;
                    if ((*p_46))
                        break;
                    --l_919;
                }
            }
            (*g_151) = (*g_151);
            (*l_521) = 0x5D15AA98L;
            for (g_188.f3 = (-28); (g_188.f3 > 34); g_188.f3 = safe_add_func_int8_t_s_s(g_188.f3, 1))
            { 
                uint16_t l_929 = 0x6370L;
                int32_t l_930[4] = {(-1L),(-1L),(-1L),(-1L)};
                int8_t l_947 = (-1L);
                int32_t l_949[7][7] = {{0x83E84175L,(-7L),0x0ACE11DEL,(-7L),0x83E84175L,0x83E84175L,(-7L)},{0x5D5FB12EL,7L,0x5D5FB12EL,(-7L),(-7L),0x5D5FB12EL,7L},{(-7L),7L,0x0ACE11DEL,0x0ACE11DEL,7L,(-7L),7L},{0x5D5FB12EL,(-7L),(-7L),0x5D5FB12EL,7L,0x5D5FB12EL,(-7L)},{0x83E84175L,0x83E84175L,(-7L),0x0ACE11DEL,(-7L),0x83E84175L,0x83E84175L},{0x83E84175L,(-7L),0x0ACE11DEL,(-7L),0x83E84175L,0x83E84175L,(-7L)},{0x5D5FB12EL,7L,0x5D5FB12EL,(-7L),(-7L),0x5D5FB12EL,7L}};
                uint32_t l_980 = 18446744073709551613UL;
                struct S0 l_994[3][5] = {{{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L},{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L},{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L},{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L},{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L}},{{0x0606F64E7028182ELL,0x98FEE50FL,0xC3F9L,0x3D0E9C51L},{0x0606F64E7028182ELL,0x98FEE50FL,0xC3F9L,0x3D0E9C51L},{0x0606F64E7028182ELL,0x98FEE50FL,0xC3F9L,0x3D0E9C51L},{0x0606F64E7028182ELL,0x98FEE50FL,0xC3F9L,0x3D0E9C51L},{0x0606F64E7028182ELL,0x98FEE50FL,0xC3F9L,0x3D0E9C51L}},{{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L},{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L},{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L},{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L},{0x55B97A2CD4AB7790LL,0xC3A16C49L,0xA3D5L,0xCEB805C0L}}};
                int i, j;
                l_924 = (*g_151);
                if ((*p_46))
                { 
                    int32_t *l_937 = &l_918;
                    struct S0 l_938 = {0x0880A3054A767918LL,0x14AED711L,0x91B1L,0x5D43C722L};
                    union U3 l_941[3][1] = {{{4294967288UL}},{{4294967288UL}},{{4294967288UL}}};
                    int32_t *l_946 = &l_276;
                    int32_t *l_948 = &l_563[2][0][2];
                    int32_t *l_950 = &l_844[1];
                    int32_t *l_951 = &l_124;
                    int32_t *l_952 = (void*)0;
                    int32_t *l_953 = &l_949[1][4];
                    int32_t *l_954 = &l_118;
                    int32_t *l_955 = (void*)0;
                    int32_t *l_956 = &l_899;
                    int32_t *l_957 = &l_579;
                    int32_t *l_958 = (void*)0;
                    int32_t *l_959 = &l_906;
                    int32_t *l_960 = &l_844[1];
                    int32_t *l_961 = &l_105;
                    int32_t *l_962 = &l_844[1];
                    int32_t l_963 = 0xF5B5F95BL;
                    int32_t *l_964 = &l_124;
                    int32_t *l_965 = (void*)0;
                    int32_t *l_966 = (void*)0;
                    int32_t *l_967 = &l_899;
                    int32_t *l_968 = (void*)0;
                    int32_t *l_969 = &l_949[1][4];
                    int32_t *l_970[2][1][3];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_970[i][j][k] = &l_915;
                        }
                    }
                    l_938 = func_48(((*g_660)++), ((g_106 <= l_915) , ((*l_937) = ((safe_div_func_uint16_t_u_u(((-1L) <= (l_930[1] |= ((*l_841) = l_929))), (safe_div_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((l_929 != (safe_unary_minus_func_int32_t_s((!(0x46E5814B74A89C49LL <= 0xDC008447DA005065LL))))) , 0xEB4C2723L), (-1L))) != 3UL) , l_929), 0xC22DL)))) >= l_929))));
                    (*l_521) |= (*p_46);
                    (*l_521) &= ((safe_rshift_func_uint16_t_u_s((l_908[2][0] || (*p_46)), ((l_906 & (((*g_660) <= ((l_941[0][0] , (safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((void*)0 == &l_353), g_137.f0)), (-1L)))) ^ l_908[4][1])) || (*g_660))) & l_878.f0))) ^ 0x6BL);
                    --l_971;
                }
                else
                { 
                    int32_t *l_974 = &l_915;
                    int32_t *l_975 = &g_74;
                    int32_t *l_976 = (void*)0;
                    int32_t *l_977 = &l_124;
                    int32_t *l_978 = &l_119;
                    int32_t *l_979[3];
                    int64_t ***l_983 = &l_840[0][0];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_979[i] = (void*)0;
                    l_980++;
                    (*l_977) &= (((*l_332) ^= (((*g_660) | (&l_840[0][0] == ((*l_521) , l_983))) || (safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((0xEFL < (l_994[1][4] , 0xF0L)), 1UL)), l_929)) , g_188.f2), l_878.f0)), (*p_46))) == l_866), 0x8ADCL)))) , (*l_521));
                    (*l_164) = (*g_151);
                }
                l_949[1][4] |= (((void*)0 != l_995) || (l_980 == ((((-1L) <= (((safe_mul_func_uint8_t_u_u((g_106 = (safe_mul_func_int16_t_s_s((8UL && (((g_31 && 0xF3B0L) & l_908[0][0]) & l_930[2])), 0UL))), l_866)) <= l_908[2][1]) && l_908[3][0])) , l_908[0][0]) | g_809)));
            }
        }
    }
    return (*l_521);
}



static struct S0  func_48(uint16_t  p_49, int32_t  p_50)
{ 
    struct S0 l_67 = {0x2A55CCBD95D6068DLL,0UL,7L,18446744073709551614UL};
    return l_67;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_61[i][j][k], "g_61[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_137.f1, "g_137.f1", print_hash_value);
    transparent_crc(g_137.f2, "g_137.f2", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_188.f3, "g_188.f3", print_hash_value);
    transparent_crc(g_226.f0, "g_226.f0", print_hash_value);
    transparent_crc(g_226.f1, "g_226.f1", print_hash_value);
    transparent_crc(g_226.f2, "g_226.f2", print_hash_value);
    transparent_crc(g_469.f0, "g_469.f0", print_hash_value);
    transparent_crc(g_469.f1, "g_469.f1", print_hash_value);
    transparent_crc(g_469.f2, "g_469.f2", print_hash_value);
    transparent_crc(g_482.f0, "g_482.f0", print_hash_value);
    transparent_crc(g_482.f1, "g_482.f1", print_hash_value);
    transparent_crc(g_482.f2, "g_482.f2", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_913[i][j], "g_913[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1009[i][j][k], "g_1009[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1015, "g_1015", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1271.f0, "g_1271.f0", print_hash_value);
    transparent_crc(g_1271.f1, "g_1271.f1", print_hash_value);
    transparent_crc(g_1271.f2, "g_1271.f2", print_hash_value);
    transparent_crc(g_1271.f3, "g_1271.f3", print_hash_value);
    transparent_crc(g_1330, "g_1330", print_hash_value);
    transparent_crc(g_1412.f0, "g_1412.f0", print_hash_value);
    transparent_crc(g_1412.f1, "g_1412.f1", print_hash_value);
    transparent_crc(g_1412.f2, "g_1412.f2", print_hash_value);
    transparent_crc(g_1542, "g_1542", print_hash_value);
    transparent_crc(g_1597, "g_1597", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
