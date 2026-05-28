// SPDX-License-Identifier: MIT
// cctest_csmith_254f32f0.c --- cctest case csmith_254f32f0 (csmith seed 625947376)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc20c07c9 */
/* @exp_ticks 0xae77 */

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

// Options:   -s 625947376 -o /tmp/csmith_gen_bugf7mz0/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   int8_t  f1;
   const int8_t * f2;
   const struct S0  f3;
   uint32_t  f4;
};


static int32_t g_3 = 0L;
static int32_t g_21 = 0x5589B583L;
static int16_t g_23 = (-4L);
static uint32_t g_24 = 1UL;
static int8_t g_54 = 0x6FL;
static int8_t *g_53 = &g_54;
static uint16_t g_65 = 0x865EL;
static uint32_t g_72 = 0x8915D489L;
static int32_t *g_96 = &g_3;
static int32_t **g_95 = &g_96;
static uint16_t g_99 = 0xA935L;
static uint16_t g_103 = 0x96CDL;
static int16_t g_106 = (-1L);
static union U1 g_107[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
static uint64_t g_137 = 0UL;
static struct S0 g_140 = {0x8B3ED55ED510FED7LL};
static int8_t g_143[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
static uint8_t g_147 = 0xDDL;
static int16_t g_150 = 0L;
static int32_t g_155 = 0x27752A06L;
static uint32_t g_156 = 0x74B569DAL;
static int64_t g_218[2][6] = {{0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL},{0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL,0xFDDEAC1AD123397FLL}};
static int32_t g_234 = 0xAE043946L;
static uint32_t g_235[2][1] = {{0xEA93C712L},{0xEA93C712L}};
static int8_t g_272 = 0x06L;
static int32_t g_273 = 0L;
static uint32_t g_274 = 0x625BB58BL;
static const int32_t *g_289 = &g_155;
static const int32_t **g_288 = &g_289;
static uint8_t g_304[6] = {0x08L,0x08L,0x08L,0x08L,0x08L,0x08L};
static uint16_t g_336 = 0UL;
static int32_t g_346 = 0L;
static int64_t g_350 = (-1L);
static int16_t g_385 = 0x1196L;
static uint32_t g_386[3][7][4] = {{{4294967294UL,1UL,1UL,1UL},{0x4C98D323L,0x4C98D323L,4294967294UL,1UL},{4UL,1UL,4UL,4294967294UL},{4UL,4294967294UL,4294967294UL,4UL},{4294967294UL,4UL,1UL,4UL},{4UL,0x4C98D323L,1UL,1UL},{4294967294UL,4294967294UL,4UL,1UL}},{{1UL,0x4C98D323L,1UL,4UL},{1UL,4UL,4UL,1UL},{4294967294UL,4UL,1UL,4UL},{4UL,0x4C98D323L,1UL,1UL},{4294967294UL,4294967294UL,4UL,1UL},{1UL,0x4C98D323L,1UL,4UL},{1UL,4UL,4UL,1UL}},{{4294967294UL,4UL,1UL,4UL},{4UL,0x4C98D323L,1UL,1UL},{4294967294UL,4294967294UL,4UL,1UL},{1UL,0x4C98D323L,1UL,4UL},{1UL,4UL,4UL,1UL},{4294967294UL,4UL,1UL,4UL},{4UL,0x4C98D323L,1UL,1UL}}};
static int32_t ***g_397 = &g_95;
static int32_t **** const g_396 = &g_397;
static uint16_t g_406[6] = {0x46B8L,0x46B8L,0x46B8L,0x46B8L,0x46B8L,0x46B8L};
static uint16_t g_414 = 1UL;
static int8_t g_477 = (-7L);
static int64_t g_478[2][3] = {{(-2L),(-1L),(-2L)},{(-2L),(-1L),(-2L)}};
static uint32_t g_479[2] = {2UL,2UL};
static uint8_t *g_485 = (void*)0;
static uint8_t *g_487 = &g_304[5];
static int64_t g_526[7][5][7] = {{{7L,0xEDEB5C68F9EBBD71LL,0L,0L,0L,(-3L),0xB074A68DBB830A52LL},{(-7L),7L,1L,(-5L),8L,0L,2L},{0L,0xB03E5DB0A236A0E8LL,0x7C944300DDB63E37LL,3L,0x86D6DA56A923163ALL,(-1L),0x595A229D3015658DLL},{0x8369F8DA1DDBE43CLL,8L,0x1A6D2180A96A3DB8LL,7L,0x1A6D2180A96A3DB8LL,8L,0x8369F8DA1DDBE43CLL},{(-1L),0x32BECF8EA8647317LL,0xAECDD51217C7FCC7LL,(-3L),3L,0L,0xD403DDED29C47D63LL}},{{0x04D1C60CBB4FA76DLL,0x86D6DA56A923163ALL,0xDEDD1452EECA2CE9LL,0xB03E5DB0A236A0E8LL,1L,1L,0x32BECF8EA8647317LL},{0x4D9733126D1AA99ELL,3L,0xAECDD51217C7FCC7LL,0L,0x5544F09820A1D9EALL,0L,(-8L)},{3L,(-8L),0x1A6D2180A96A3DB8LL,0xFC3C018DC6315FFALL,0x04D1C60CBB4FA76DLL,0x1A6D2180A96A3DB8LL,1L},{1L,0xB074A68DBB830A52LL,0x7C944300DDB63E37LL,0xA49A58F885F79899LL,(-8L),0L,0x32BECF8EA8647317LL},{1L,0L,1L,(-1L),0xE88D1CBDA052EB0FLL,0x4DED783F521F7CC3LL,(-10L)}},{{1L,0L,0L,(-1L),0xB074A68DBB830A52LL,0x5544F09820A1D9EALL,7L},{3L,(-10L),3L,0x04D1C60CBB4FA76DLL,0xA49A58F885F79899LL,(-1L),0x595A229D3015658DLL},{3L,(-1L),1L,0L,0x086DBE931AE1242CLL,1L,0L},{1L,0xC586C547EFB90BF1LL,5L,0xEDEB5C68F9EBBD71LL,1L,0xE88D1CBDA052EB0FLL,(-5L)},{1L,0x22984D524F12A3BDLL,1L,8L,(-3L),0xDEDD1452EECA2CE9LL,3L}},{{1L,0xA9D6C35AECD1C566LL,8L,7L,0xDEDD1452EECA2CE9LL,0xDEDD1452EECA2CE9LL,5L},{0xB0BAA9BFF92EC177LL,0xE88D1CBDA052EB0FLL,0xB0BAA9BFF92EC177LL,1L,3L,0x5A85652763322F8BLL,0xE033288B0B0584A9LL},{1L,0L,0x22984D524F12A3BDLL,3L,(-1L),0x86D6DA56A923163ALL,0L},{1L,(-1L),0xDEDD1452EECA2CE9LL,0xD403DDED29C47D63LL,(-1L),0x5A85652763322F8BLL,(-7L)},{2L,(-3L),(-1L),0xB7B50C5A400F266BLL,1L,0xDEDD1452EECA2CE9LL,(-9L)}},{{0x1A6D2180A96A3DB8LL,0xFC3C018DC6315FFALL,0x04D1C60CBB4FA76DLL,0x1A6D2180A96A3DB8LL,1L,0x5ABDA879B8727A0ALL,(-5L)},{0xD403DDED29C47D63LL,0xD9E34060D448F311LL,0xDEDD1452EECA2CE9LL,0xFC3C018DC6315FFALL,1L,0xB7B50C5A400F266BLL,7L},{(-1L),1L,0L,1L,(-3L),(-1L),0xDEDD1452EECA2CE9LL},{5L,3L,0xB03E5DB0A236A0E8LL,0x086DBE931AE1242CLL,0L,0L,1L},{0xAECDD51217C7FCC7LL,(-1L),0x6F845BFBE83BFA71LL,0x086DBE931AE1242CLL,3L,(-1L),(-7L)}},{{(-1L),0xEDEB5C68F9EBBD71LL,2L,1L,(-1L),1L,0L},{0x4DED783F521F7CC3LL,0xAECDD51217C7FCC7LL,0L,0xFC3C018DC6315FFALL,1L,8L,(-1L)},{0xFC3C018DC6315FFALL,1L,0x41DA84BA11D4C092LL,0x1A6D2180A96A3DB8LL,0x6F845BFBE83BFA71LL,0x7C944300DDB63E37LL,5L},{3L,0x8E471CA4684CC45CLL,0xB7B50C5A400F266BLL,0xB7B50C5A400F266BLL,0x8E471CA4684CC45CLL,3L,1L},{5L,0L,7L,0xD403DDED29C47D63LL,1L,0xA49A58F885F79899LL,3L}},{{8L,0L,(-1L),3L,0xE033288B0B0584A9LL,0xECC87DAEB41E3905LL,0xD403DDED29C47D63LL},{1L,0L,0L,1L,0xAECDD51217C7FCC7LL,0x6F845BFBE83BFA71LL,0xB7B50C5A400F266BLL},{0x1A6D2180A96A3DB8LL,0x8E471CA4684CC45CLL,7L,5L,0L,0x32BECF8EA8647317LL,0x1A6D2180A96A3DB8LL},{2L,1L,1L,(-1L),1L,0xECC87DAEB41E3905LL,0xFC3C018DC6315FFALL},{(-9L),0xAECDD51217C7FCC7LL,(-1L),0L,0xA9D6C35AECD1C566LL,0xE033288B0B0584A9LL,1L}}};
static uint16_t g_553 = 1UL;
static const int64_t g_617 = 0x7F6B2CCB7F4E04A8LL;
static const uint32_t g_663 = 18446744073709551609UL;
static union U1 *g_700 = &g_107[3];
static union U1 **g_699[6] = {&g_700,&g_700,&g_700,&g_700,&g_700,&g_700};
static union U1 g_722 = {65529UL};
static int32_t **g_727[5] = {&g_96,&g_96,&g_96,&g_96,&g_96};
static struct S0 g_729 = {0xBFD98CBB0942C2C6LL};
static uint32_t **g_822 = (void*)0;
static int16_t g_895 = 1L;
static int64_t g_948 = (-10L);
static uint64_t g_968 = 0x881D73CDA9C2A700LL;
static union U1 g_977 = {65530UL};
static int32_t g_990[5] = {0x3D9C8EDFL,0x3D9C8EDFL,0x3D9C8EDFL,0x3D9C8EDFL,0x3D9C8EDFL};
static struct S0 ***g_993 = (void*)0;
static int8_t ** const g_1067 = (void*)0;
static int32_t ****g_1093 = &g_397;
static int32_t *****g_1092 = &g_1093;
static union U1 g_1136 = {65531UL};
static uint8_t **g_1142 = &g_485;
static uint32_t g_1170 = 4294967286UL;
static int8_t * const g_1215 = &g_722.f1;



static int64_t  func_1(void);
static struct S0  func_27(int8_t * const  p_28, int8_t * const  p_29);
static int8_t * const  func_30(int8_t  p_31, struct S0  p_32);
static uint32_t  func_35(int32_t * const  p_36, const uint8_t  p_37);
static uint64_t  func_44(int8_t  p_45, int32_t  p_46, uint8_t  p_47);
static const uint16_t  func_59(int8_t  p_60, const int64_t  p_61);
static uint32_t  func_80(int32_t  p_81, int64_t  p_82, union U1  p_83);
static uint64_t  func_86(int16_t  p_87, int8_t  p_88, int32_t * p_89, const int16_t  p_90, uint16_t  p_91);




static int64_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5 = &g_3;
    int32_t l_6 = 0x1A9565E0L;
    int32_t *l_7 = &l_6;
    int32_t l_8 = 8L;
    int32_t *l_9 = &l_8;
    int32_t *l_10 = (void*)0;
    int32_t *l_11 = &l_8;
    int32_t *l_12 = &g_3;
    int32_t *l_13 = &l_6;
    int32_t *l_14 = &g_3;
    int32_t *l_15 = (void*)0;
    int32_t *l_16 = &l_6;
    int32_t *l_17 = &g_3;
    int32_t *l_18 = (void*)0;
    int32_t *l_19 = &l_8;
    int32_t *l_20[1][4][5] = {{{&l_6,&g_3,&l_6,&g_3,&l_6},{&g_3,&g_3,&g_3,&g_3,&g_3},{&l_6,&g_3,&l_6,&g_3,&l_6},{&g_3,&g_3,&g_3,&g_3,&g_3}}};
    int64_t l_22 = (-1L);
    uint8_t l_49 = 247UL;
    int32_t *l_50[2];
    uint32_t *l_726 = &g_24;
    int8_t * const l_978 = &g_477;
    struct S0 *l_979 = &g_140;
    int32_t l_1099 = 0x3679DE17L;
    int32_t l_1106 = 0x63893875L;
    const uint32_t l_1113 = 4294967295UL;
    int8_t ** const *l_1141 = &g_1067;
    uint8_t l_1143 = 0x0CL;
    uint32_t l_1153 = 0x3463D5B8L;
    const union U1 *l_1185 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_50[i] = (void*)0;
    g_24++;
    (*l_979) = (g_24 , func_27(func_30((safe_add_func_int16_t_s_s(((((func_35(&l_8, (safe_div_func_int32_t_s_s(((((((safe_div_func_int32_t_s_s(((*l_9) = (((*l_726) = (safe_mod_func_uint64_t_u_u(func_44(((+((g_21 = l_49) , (g_24 | (-1L)))) || g_3), (safe_div_func_int32_t_s_s(((g_53 != (void*)0) < (*l_7)), (-1L))), g_3), (*l_13)))) | (*l_16))), g_346)) <= 0xEE44L) , (*l_2)) , (*l_17)) && (*g_289)) || (*l_11)), g_477))) , (*l_11)) > g_617) > g_617) || g_479[0]), g_272)), g_729), l_978));
    for (g_385 = 0; (g_385 != 27); g_385 = safe_add_func_uint64_t_u_u(g_385, 9))
    { 
        struct S0 **l_992 = &l_979;
        struct S0 ***l_991 = &l_992;
        int32_t l_1001[5][5] = {{0xA5804A33L,0x123C372FL,5L,0x123C372FL,0xA5804A33L},{1L,(-1L),(-1L),0xC619AE82L,(-1L)},{(-1L),(-1L),1L,1L,(-1L)},{5L,0x123C372FL,0xA5804A33L,1L,0x9F7AFD73L},{0L,(-1L),(-1L),0x123C372FL,(-1L)}};
        uint16_t *l_1002 = &g_99;
        int32_t l_1003 = (-5L);
        uint16_t *l_1004 = &g_107[2].f0;
        int32_t **l_1005 = &l_19;
        uint32_t *l_1117 = &g_72;
        int32_t * const *l_1123[7] = {&l_20[0][0][4],&l_7,&l_7,&l_20[0][0][4],&l_7,&l_7,&l_20[0][0][4]};
        int32_t * const **l_1122 = &l_1123[6];
        int32_t * const ***l_1121 = &l_1122;
        int32_t * const ****l_1120 = &l_1121;
        uint64_t l_1127 = 0xEB4575E8BB7A50B6LL;
        uint64_t l_1128[6] = {0UL,0x8C954A2E20BD801BLL,0UL,0UL,0x8C954A2E20BD801BLL,0UL};
        int8_t *l_1139[2];
        uint32_t l_1152 = 0x003702A6L;
        int8_t l_1177 = 1L;
        uint8_t l_1178 = 0xFFL;
        uint32_t l_1197 = 0x1A5CC60FL;
        uint32_t l_1218 = 0UL;
        int16_t *l_1219 = &g_106;
        int16_t *l_1220[3][4] = {{&g_895,&g_385,&g_895,&g_385},{&g_895,&g_385,&g_895,&g_385},{&g_895,&g_385,&g_895,&g_385}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_1139[i] = (void*)0;
    }
    return g_143[3];
}



static struct S0  func_27(int8_t * const  p_28, int8_t * const  p_29)
{ 
    return g_729;
}



static int8_t * const  func_30(int8_t  p_31, struct S0  p_32)
{ 
    int32_t l_730 = 0xB26FD2F0L;
    int32_t l_731 = 0x22350376L;
    int32_t l_732 = 0x86CE0E6CL;
    int32_t *l_733 = (void*)0;
    int32_t *l_734 = &l_732;
    int32_t *l_735 = (void*)0;
    int32_t *l_736 = &l_732;
    int32_t *l_737 = &l_732;
    int32_t *l_738 = &g_3;
    int32_t *l_739[6][3][6] = {{{&g_3,&l_732,&g_3,&l_731,&l_732,&g_3},{&g_3,&l_731,&g_3,&l_731,&g_155,&l_732},{&l_731,&g_155,&l_732,&l_731,&g_155,&l_731}},{{&g_3,&g_155,&g_155,&l_731,&g_155,&l_731},{&g_3,&g_155,&l_732,&g_3,&g_155,(void*)0},{&l_731,&g_155,(void*)0,(void*)0,&g_155,&g_155}},{{&g_155,&g_155,&g_3,&g_3,&g_155,&g_155},{(void*)0,&l_731,(void*)0,&g_3,&l_732,(void*)0},{&l_732,&l_732,&l_732,&g_155,&g_3,&l_731}},{{&l_732,&l_731,&g_155,&g_3,&g_155,&l_731},{(void*)0,&l_732,&l_732,&g_3,&g_155,&l_732},{&g_155,&l_732,&g_3,(void*)0,&g_155,&g_3}},{{&l_731,&l_731,&g_3,&g_3,&g_3,&g_3},{&g_3,&l_732,&g_3,&l_731,&l_732,&g_3},{&g_3,&l_731,&g_3,&l_731,&g_155,&l_732}},{{&l_731,&g_155,&l_732,&l_731,&g_155,&l_731},{&g_3,&g_155,&g_155,&l_731,&g_155,&l_731},{&g_3,&g_155,&l_732,&g_3,&g_155,(void*)0}}};
    int8_t l_740 = (-4L);
    uint32_t l_741 = 18446744073709551615UL;
    int32_t * const *l_756 = &l_733;
    int32_t * const ** const l_755 = &l_756;
    int64_t *l_767 = &g_526[2][0][2];
    uint32_t l_791 = 4294967291UL;
    struct S0 **l_858 = (void*)0;
    union U1 *l_975 = (void*)0;
    int i, j, k;
lbl_793:
    ++l_741;
    for (g_414 = 0; (g_414 <= 55); g_414 = safe_add_func_uint64_t_u_u(g_414, 7))
    { 
        int32_t l_746 = 0xDF65CD44L;
        uint64_t l_747[1];
        int64_t *l_766 = (void*)0;
        union U1 l_813 = {0xB44EL};
        uint8_t *l_814 = &g_304[5];
        uint16_t l_821 = 0xC3A9L;
        int32_t l_835 = (-7L);
        int32_t l_836 = 0x3F542FB1L;
        struct S0 *l_857 = &g_729;
        struct S0 * const *l_856 = &l_857;
        int32_t **l_869 = &l_739[1][1][3];
        int8_t l_876[1];
        int32_t l_879 = (-10L);
        int32_t l_882 = 9L;
        int32_t l_887 = 0x2C7BC777L;
        int32_t l_889 = (-3L);
        int32_t l_892 = 8L;
        int32_t l_894 = 0xA6D779C6L;
        int32_t l_897[5][5] = {{0L,0x069405B7L,0x069405B7L,0L,1L},{0L,3L,0x2FED06B8L,0x2FED06B8L,3L},{1L,0x069405B7L,0x2FED06B8L,0x819CC7BDL,0x819CC7BDL},{0x069405B7L,1L,0x069405B7L,0x2FED06B8L,0x819CC7BDL},{3L,0L,0x819CC7BDL,0L,3L}};
        int8_t **l_907 = (void*)0;
        int8_t ***l_910 = &l_907;
        int i, j;
        for (i = 0; i < 1; i++)
            l_747[i] = 18446744073709551614UL;
        for (i = 0; i < 1; i++)
            l_876[i] = 0xD1L;
        if ((0xD957L != 1L))
        { 
            int32_t l_754 = 6L;
            l_747[0]++;
            (*l_737) |= ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((((*g_396) != (l_754 , l_755)) , l_754), p_31)), (safe_sub_func_uint16_t_u_u(((!((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(0xD117L, (((safe_div_func_int16_t_s_s((((l_767 = l_766) != (void*)0) | g_336), g_137)) < 0x79D30D862036B83BLL) , g_479[0]))) == 0x21D7E6916736659ELL), l_746)) < 0xF423L)) <= l_747[0]), g_107[2].f1)))) || l_754);
            return &g_477;
        }
        else
        { 
            int32_t **l_768 = &l_735;
            uint32_t *l_796 = (void*)0;
            uint8_t *l_812 = (void*)0;
            int32_t l_873 = 0x5D94A892L;
            int32_t l_878 = 0xB3723741L;
            int32_t l_881 = 0x9EC9371EL;
            int32_t l_883 = 1L;
            int32_t l_884 = 0xFDBC38DBL;
            int32_t l_885 = 0x6C872F30L;
            int32_t l_886 = (-5L);
            int32_t l_888[2][5][5] = {{{0x9BE87B05L,(-5L),(-5L),0x9BE87B05L,(-1L)},{0x9BE87B05L,(-5L),(-5L),0x9BE87B05L,(-1L)},{0x9BE87B05L,(-5L),(-5L),0x9BE87B05L,(-1L)},{0x9BE87B05L,(-5L),(-5L),0x9BE87B05L,(-1L)},{0x9BE87B05L,(-5L),(-5L),0x9BE87B05L,(-1L)}},{{0x9BE87B05L,0x9BE87B05L,0x9BE87B05L,0x61F1EAC2L,3L},{0x61F1EAC2L,0x9BE87B05L,0x9BE87B05L,0x61F1EAC2L,3L},{0x61F1EAC2L,0x9BE87B05L,0x9BE87B05L,0x61F1EAC2L,3L},{0x61F1EAC2L,0x9BE87B05L,0x9BE87B05L,0x61F1EAC2L,3L},{0x61F1EAC2L,0x9BE87B05L,0x9BE87B05L,0x61F1EAC2L,3L}}};
            int16_t l_893[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_893[i] = 0xAC00L;
            (*l_768) = (**l_755);
            if (p_31)
            { 
                int32_t *l_769[6][7] = {{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                (*l_734) ^= (*g_289);
                l_769[1][2] = (*l_756);
            }
            else
            { 
                uint8_t l_773[6];
                int32_t l_792 = (-1L);
                uint32_t *l_798[5] = {&g_479[0],&g_479[0],&g_479[0],&g_479[0],&g_479[0]};
                uint32_t **l_797 = &l_798[1];
                uint16_t *l_799[1];
                struct S0 *l_801[6] = {&g_140,&g_140,&g_140,&g_140,&g_140,&g_140};
                struct S0 **l_800 = &l_801[4];
                struct S0 *l_803 = &g_140;
                struct S0 **l_802 = &l_803;
                uint8_t l_830 = 0x2AL;
                uint32_t l_859[2];
                uint64_t *l_860 = &l_747[0];
                int i;
                for (i = 0; i < 6; i++)
                    l_773[i] = 255UL;
                for (i = 0; i < 1; i++)
                    l_799[i] = &g_553;
                for (i = 0; i < 2; i++)
                    l_859[i] = 0x26CE9661L;
                for (g_72 = 0; (g_72 == 41); ++g_72)
                { 
                    int8_t l_772 = 1L;
                    ++l_773[3];
                    l_792 = (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((*l_767) ^= (safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_uint8_t_u(g_304[5])) >= (safe_lshift_func_uint8_t_u_s(g_3, 4))), (((-10L) & g_406[4]) > ((safe_add_func_uint8_t_u_u((p_31 >= l_747[0]), p_31)) ^ p_32.f0)))) ^ g_143[4]), l_773[4])), p_32.f0))) , l_791) != p_31), g_729.f0)), 0xF7L));
                    (*l_736) = ((*l_738) = p_32.f0);
                    if (p_32.f0)
                        goto lbl_793;
                    if ((**g_288))
                        continue;
                }
                (*l_734) = (safe_add_func_uint16_t_u_u((((g_65 = ((&g_137 != &g_137) < (p_31 | (l_796 == ((*l_797) = &g_24))))) || (((void*)0 != &g_396) ^ l_747[0])) , 0xA8B7L), g_273));
                if (((*l_738) = (((*l_800) = &g_729) != ((*l_802) = &g_729))))
                { 
                    (*l_737) &= (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((g_386[2][2][0] , ((((*l_767) |= (safe_lshift_func_uint8_t_u_s(p_31, 4))) , l_812) != &g_304[0])) & (((l_813 , l_812) == (l_814 = &l_773[3])) >= p_31)), 0x81BB3CBFL)) , 0x2F8BL), 1UL));
                    l_792 &= (0x2BL || (*g_53));
                }
                else
                { 
                    uint32_t **l_823 = &l_798[2];
                    int32_t l_829 = 0xF9ED6D21L;
                    (*l_738) = 2L;
                    if (p_31)
                        continue;
                    l_836 ^= (((*g_53) &= (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((l_821 <= ((g_822 == l_823) & (--g_406[5]))) , ((~(safe_rshift_func_uint16_t_u_u((++l_830), g_72))) | 0x32783863E2734614LL)), 11)), (((l_835 |= (l_792 = (safe_mul_func_uint16_t_u_u((((((2L && ((*l_814) = ((((*l_734) = (g_24 ^ (*l_738))) > 65527UL) , 1UL))) & l_747[0]) || 0x59L) & 7L) == g_218[0][4]), 1L)))) > g_386[0][1][3]) >= 0x0FL))), 6UL))) > 0x67L);
                    return &g_477;
                }
                (*l_738) |= ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((+p_32.f0) | ((safe_div_func_uint64_t_u_u(((l_792 || ((safe_lshift_func_int8_t_s_s(0x54L, 2)) == ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_835 &= ((safe_mul_func_uint8_t_u_u(g_386[1][0][3], (((safe_add_func_uint8_t_u_u(l_830, p_31)) , ((*l_814) = (((*l_860) = (safe_sub_func_int8_t_s_s((l_856 == l_858), l_859[0]))) != g_479[0]))) >= 1L))) ^ l_813.f1)), 1UL)), 0x6AE0L)) , 0x771EL))) || p_31), p_31)) && 0xD3894630CB5DACF5LL)), (*l_734))), 14)) >= l_792);
            }
            for (l_821 = 0; (l_821 <= 0); l_821 += 1)
            { 
                uint64_t l_861 = 0x84CA16465F3A4665LL;
                int32_t l_872 = 6L;
                int32_t l_874 = 8L;
                int32_t l_880 = 0x7F01CE0DL;
                int32_t l_890 = 0xC41129B9L;
                int32_t l_891 = (-3L);
                int32_t l_896 = 0x34F8AF09L;
                for (g_137 = 0; (g_137 <= 1); g_137 += 1)
                { 
                    int64_t l_866 = 1L;
                    l_861++;
                    l_866 = ((*l_736) = (safe_mul_func_uint8_t_u_u(0x61L, (*g_53))));
                    if (p_31)
                        continue;
                    (*l_738) |= ((*l_736) &= ((&l_791 == (void*)0) , (l_861 || (&g_397 == &g_397))));
                }
                for (g_65 = 0; (g_65 <= 0); g_65 += 1)
                { 
                    int32_t **l_870 = &l_733;
                    uint16_t *l_871[3][7][7] = {{{(void*)0,&l_813.f0,&g_722.f0,&g_414,&g_406[5],&g_722.f0,(void*)0},{&g_722.f0,&g_107[2].f0,&g_722.f0,&l_813.f0,&g_722.f0,&g_107[2].f0,&g_722.f0},{(void*)0,&g_722.f0,&g_406[5],&g_414,&g_722.f0,&l_813.f0,(void*)0},{&l_813.f0,&g_722.f0,&g_107[2].f0,&g_107[2].f0,&g_722.f0,&l_813.f0,&l_813.f0},{&g_406[5],&l_821,&g_406[5],&l_813.f0,&g_99,(void*)0,&g_722.f0},{&g_406[5],&g_553,&g_722.f0,&g_553,&g_406[5],&g_65,&g_107[2].f0},{&g_65,&l_821,&g_722.f0,&g_722.f0,&g_414,(void*)0,&g_414}},{{&g_406[5],&g_722.f0,&g_722.f0,&g_406[5],&g_553,&g_414,&g_103},{&g_65,&g_722.f0,&g_99,&g_336,(void*)0,&g_336,&g_103},{&g_406[5],&g_107[2].f0,&g_406[5],&g_414,&l_813.f0,&g_107[2].f0,&g_103},{&g_406[5],&l_813.f0,&g_414,(void*)0,(void*)0,(void*)0,&g_414},{&l_813.f0,&l_813.f0,&g_553,&l_813.f0,&g_103,&g_107[2].f0,&g_107[2].f0},{(void*)0,(void*)0,(void*)0,&l_821,(void*)0,&g_336,&g_722.f0},{&g_722.f0,&g_65,&l_813.f0,&g_406[5],&g_103,&g_414,&l_813.f0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_813.f0,&g_414,&g_103,&g_406[5],&l_813.f0,&g_65,&g_722.f0},{&g_722.f0,&g_336,(void*)0,&g_336,&g_103,(void*)0,&l_821},{&l_813.f0,&g_722.f0,&g_722.f0,&g_414,&g_107[2].f0,&g_553,&g_553},{(void*)0,(void*)0,&g_65,(void*)0,(void*)0,&g_722.f0,(void*)0},{&g_406[5],&g_722.f0,&g_553,&g_65,&g_107[2].f0,&l_813.f0,&g_107[2].f0},{&g_722.f0,&g_336,&g_103,(void*)0,&g_406[5],&l_813.f0,&g_414}}};
                    int32_t l_875 = 1L;
                    int32_t l_877[4];
                    uint64_t l_898[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_877[i] = 0L;
                    (*l_737) &= l_747[0];
                    (*l_734) &= (l_873 = (safe_lshift_func_int16_t_s_u((3L >= (l_872 = (l_869 == ((**g_396) = l_870)))), 15)));
                    --l_898[0];
                    if (l_861)
                        continue;
                    (**g_397) = &l_896;
                }
                return &g_143[4];
            }
            for (l_791 = 0; (l_791 >= 56); l_791 = safe_add_func_uint32_t_u_u(l_791, 6))
            { 
                uint16_t l_904 = 0UL;
                int8_t * const l_911 = &g_54;
                if (((*l_756) != (*l_869)))
                { 
                    struct S0 l_903 = {0xC020F7B117F36240LL};
                    (*l_734) ^= (*g_289);
                    (*l_857) = l_903;
                    l_904--;
                }
                else
                { 
                    int8_t ***l_908 = &l_907;
                    if (g_3)
                        goto lbl_793;
                    (*l_908) = l_907;
                }
                for (g_274 = 1; (g_274 <= 5); g_274 += 1)
                { 
                    int32_t *l_909[4][6][5] = {{{&l_879,&l_882,&l_888[0][4][4],&l_878,&l_878},{&l_892,&l_887,&l_887,&l_892,&g_3},{&l_881,&g_155,&l_873,(void*)0,&l_886},{&l_732,&l_888[0][4][4],&l_884,(void*)0,&l_887},{&l_882,&l_881,(void*)0,(void*)0,&l_881},{&g_3,&l_894,(void*)0,&l_892,(void*)0}},{{&l_879,&l_878,&g_155,&l_878,&l_873},{&l_894,(void*)0,&l_835,&l_897[2][4],&l_897[2][4]},{&l_879,&l_836,&l_879,&l_883,(void*)0},{&g_3,(void*)0,(void*)0,&l_894,&l_835},{&l_882,&l_878,&l_886,&g_155,&l_882},{&l_732,&l_835,(void*)0,&l_835,&l_732}},{{&l_881,&l_732,&l_879,&l_878,&g_155},{&l_892,(void*)0,&l_835,&l_889,&l_884},{&l_879,&l_879,&g_155,&l_732,&g_155},{&l_889,&l_889,(void*)0,&l_835,&l_732},{&g_155,&l_873,(void*)0,&l_886,&l_882},{(void*)0,&l_882,&l_884,(void*)0,&l_835}},{{&l_885,&l_873,&l_873,&l_885,(void*)0},{(void*)0,&l_889,&l_887,&l_732,&l_897[2][4]},{(void*)0,&l_879,&l_888[0][4][4],&l_879,&l_873},{&l_882,(void*)0,&l_732,&l_732,(void*)0},{&l_882,&l_732,&l_836,&l_885,&l_881},{&l_888[0][4][4],&l_835,&l_889,(void*)0,&l_887}}};
                    int i, j, k;
                    (**g_397) = l_909[0][0][2];
                    l_910 = (void*)0;
                    return l_911;
                }
            }
        }
        (**l_856) = p_32;
        for (g_234 = 5; (g_234 >= 0); g_234 -= 1)
        { 
            return &g_143[2];
        }
    }
    for (g_414 = 0; (g_414 > 25); g_414 = safe_add_func_uint8_t_u_u(g_414, 2))
    { 
        struct S0 **l_914 = (void*)0;
        struct S0 ***l_915[3];
        int32_t l_924 = 0xE7249FC4L;
        int64_t *l_933 = &g_478[1][0];
        int16_t l_934 = 5L;
        int32_t l_947 = 0xC5AFAA56L;
        int8_t * const l_952 = &g_722.f1;
        int32_t l_954 = 0xB5564362L;
        int32_t l_955[1];
        int32_t l_956 = 0x6B072923L;
        uint8_t l_972 = 3UL;
        int i;
        for (i = 0; i < 3; i++)
            l_915[i] = &l_914;
        for (i = 0; i < 1; i++)
            l_955[i] = 0xFA6A0916L;
        l_858 = l_914;
        if ((safe_sub_func_int16_t_s_s((((((*g_53) = (safe_add_func_int64_t_s_s(((*l_933) |= (safe_mod_func_int64_t_s_s((((&g_396 != &g_396) > (safe_mul_func_uint16_t_u_u(0x9973L, (l_924 = p_31)))) && ((safe_rshift_func_uint8_t_u_u(p_31, ((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((0x1A26L ^ ((p_32 , l_933) != (void*)0)) <= l_924), 11)), p_32.f0)), p_32.f0)) != 0L))) , p_32.f0)), 0xEF38C6D9AAB95725LL))), l_934))) >= 8UL) < p_31) , 0L), 0x1963L)))
        { 
            if (p_32.f0)
                break;
        }
        else
        { 
            l_735 = &l_924;
        }
        for (g_23 = 5; (g_23 >= 0); g_23 -= 1)
        { 
            uint64_t l_935[3];
            const struct S0 l_942 = {-5L};
            int32_t **** const *l_945[1];
            int16_t *l_946 = &g_895;
            uint16_t l_949 = 0UL;
            int i;
            for (i = 0; i < 3; i++)
                l_935[i] = 0UL;
            for (i = 0; i < 1; i++)
                l_945[i] = &g_396;
            --l_935[0];
            if (((((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(0L, g_304[g_23])), (l_942 , (g_140.f0 >= (l_945[0] == (void*)0))))) >= ((*l_946) |= ((((l_934 , p_32.f0) & 0x4AD07874L) , (void*)0) == (void*)0))) , p_31) < (-1L)))
            { 
                l_949--;
                return l_952;
            }
            else
            { 
                int32_t l_953 = 1L;
                int32_t l_957 = (-7L);
                int16_t l_958 = 0x38A8L;
                int32_t l_959 = 0xD10B75F5L;
                int32_t l_960 = (-6L);
                int32_t l_961 = 1L;
                int32_t l_962 = 1L;
                int32_t l_963 = 0x5BEF80BDL;
                int32_t l_964 = 0x95B6EBC1L;
                int32_t l_965 = 0L;
                int32_t l_966 = 8L;
                int32_t l_967[7][7][2] = {{{0x3DB8D05DL,0x68A3D27BL},{0xB2F423E4L,0x6DBA8325L},{0x5D2B5ACBL,9L},{(-5L),9L},{0x5D2B5ACBL,0x6DBA8325L},{0xB2F423E4L,0x68A3D27BL},{0x3DB8D05DL,(-1L)}},{{0x17F5D379L,(-1L)},{(-1L),0x7A49DA7DL},{0xC9262F0FL,0x5D2B5ACBL},{0x0FFD22B7L,0x066C87B5L},{(-1L),(-5L)},{3L,0x0FFD22B7L},{(-6L),(-6L)}},{{0L,0x1E475E0EL},{0x7A49DA7DL,0x496677B9L},{0xC17445E8L,0x88E10061L},{0x3DB8D05DL,0x50927DDDL},{(-6L),0L},{(-6L),0x50927DDDL},{0x3DB8D05DL,0x17F5D379L}},{{0x50927DDDL,9L},{3L,0L},{0x68A3D27BL,0xE2FBD1D8L},{0xE2FBD1D8L,0x88E10061L},{0x0FFD22B7L,0xDE4A0EFAL},{0x5D2B5ACBL,0xC17445E8L},{0x88E10061L,(-5L)}},{{0xB2F423E4L,3L},{0x28CCE803L,0x3DB8D05DL},{0x066C87B5L,0x5D2B5ACBL},{0x07493651L,0xB5A8FD74L},{8L,0x496677B9L},{(-5L),0x7A49DA7DL},{0xDE4A0EFAL,0x7A49DA7DL}},{{(-5L),0x496677B9L},{8L,0xB5A8FD74L},{0x07493651L,0x5D2B5ACBL},{0x066C87B5L,0x3DB8D05DL},{0x28CCE803L,3L},{0xB2F423E4L,(-5L)},{0x88E10061L,0xC17445E8L}},{{0x5D2B5ACBL,0xDE4A0EFAL},{0x0FFD22B7L,0x88E10061L},{0xE2FBD1D8L,0xE2FBD1D8L},{0x68A3D27BL,0L},{3L,9L},{0x50927DDDL,0x17F5D379L},{0x3DB8D05DL,0x50927DDDL}}};
                int32_t l_971 = (-3L);
                union U1 *l_976 = &g_977;
                int i, j, k;
                l_953 ^= p_31;
                g_968++;
                ++l_972;
                l_976 = l_975;
            }
        }
    }
    return &g_54;
}



static uint32_t  func_35(int32_t * const  p_36, const uint8_t  p_37)
{ 
    uint64_t l_728[3][1][1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_728[i][j][k] = 0x01698AE2D0759F32LL;
        }
    }
    g_727[3] = ((**g_396) = (**g_396));
    return l_728[0][0][0];
}



static uint64_t  func_44(int8_t  p_45, int32_t  p_46, uint8_t  p_47)
{ 
    const uint8_t l_62 = 0x5DL;
    uint8_t l_84 = 0x5AL;
    int32_t *l_417 = &g_155;
    uint16_t l_445 = 0x9752L;
    const int32_t *l_446[7] = {&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155};
    int16_t l_462 = 7L;
    struct S0 l_466[5][7] = {{{-1L},{-5L},{-1L},{0x9395FA12A793669BLL},{0L},{0x9395FA12A793669BLL},{-1L}},{{0x7295ACF06F11A5ECLL},{0x7295ACF06F11A5ECLL},{0x93D730E39718DDC0LL},{0x7295ACF06F11A5ECLL},{0x7295ACF06F11A5ECLL},{0x93D730E39718DDC0LL},{0x7295ACF06F11A5ECLL}},{{0L},{0x9395FA12A793669BLL},{-1L},{-5L},{-1L},{0x9395FA12A793669BLL},{0L}},{{4L},{0x7295ACF06F11A5ECLL},{4L},{4L},{0x7295ACF06F11A5ECLL},{4L},{4L}},{{0L},{-5L},{0x9070582BCD2E3A9FLL},{-5L},{0L},{0xC505BFE8EF02D1D4LL},{0L}}};
    uint32_t l_513 = 4294967287UL;
    uint32_t l_539 = 0x7ABDA94DL;
    int8_t *l_568 = (void*)0;
    uint32_t *l_670[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_669 = &l_670[2];
    uint8_t **l_691 = &g_487;
    union U1 *l_698 = &g_107[0];
    union U1 **l_697[7] = {&l_698,&l_698,&l_698,&l_698,&l_698,&l_698,&l_698};
    int i, j;
    if ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(func_59((*g_53), l_62), 5)), ((g_21 == (-1L)) >= p_46))))
    { 
        uint32_t l_85 = 4UL;
        int32_t *l_93 = &g_3;
        int32_t **l_92 = &l_93;
        int32_t ***l_94 = &l_92;
        int32_t ***l_97 = &g_95;
        uint16_t *l_98 = &g_99;
        uint16_t l_100 = 0xC847L;
        for (g_72 = 0; (g_72 >= 16); g_72 = safe_add_func_int16_t_s_s(g_72, 5))
        { 
            int32_t *l_79 = &g_3;
            (*l_79) |= ((*g_53) > ((void*)0 != &g_54));
            return l_62;
        }
        (*l_93) = (func_80((g_65 >= l_84), ((l_85 && (func_86((((*l_98) = (((*l_94) = l_92) != ((*l_97) = g_95))) || (l_100 & (&p_46 != l_93))), l_84, &g_21, g_54, g_72) , p_46)) , g_106), g_107[2]) , (-8L));
    }
    else
    { 
        uint32_t l_409 = 0x0332F5C8L;
        uint8_t l_444[2][1];
        int32_t l_472 = 0x2893DC63L;
        int32_t l_475 = 0x79C7857CL;
        int32_t l_476[4][7] = {{0x15368788L,(-2L),0L,1L,0L,(-2L),0x15368788L},{0x15368788L,(-2L),0L,1L,0L,(-2L),0x15368788L},{0x15368788L,(-2L),0L,1L,0L,(-2L),0x15368788L},{0x15368788L,(-2L),0L,1L,0L,(-2L),0x15368788L}};
        struct S0 l_494 = {0L};
        uint32_t l_512 = 0xC79D9A08L;
        int16_t l_546 = 0xC1C5L;
        int32_t *l_652 = &g_3;
        int32_t *l_662 = &l_476[2][3];
        union U1 *l_664 = &g_107[2];
        uint16_t *l_665 = &g_336;
        uint64_t * const l_666 = (void*)0;
        int32_t l_672[2][3] = {{7L,(-5L),(-5L)},{7L,(-5L),(-5L)}};
        uint16_t l_683 = 0x6719L;
        uint32_t l_702 = 0x5FD911D9L;
        union U1 *l_721 = &g_722;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_444[i][j] = 0x62L;
        }
lbl_690:
        if ((0x397C8A83L ^ l_409))
        { 
            uint64_t *l_422[3][6] = {{&g_137,(void*)0,(void*)0,&g_137,(void*)0,(void*)0},{&g_137,(void*)0,(void*)0,&g_137,(void*)0,(void*)0},{&g_137,(void*)0,(void*)0,&g_137,(void*)0,(void*)0}};
            uint32_t l_423 = 0xA3F53466L;
            int32_t l_424 = 0x880C3669L;
            uint8_t *l_425 = &l_84;
            uint8_t *l_426 = &g_147;
            int32_t l_427 = 0xECA8A1A8L;
            uint32_t *l_438 = &l_409;
            int16_t *l_443 = &g_150;
            int i, j;
            for (g_99 = 0; (g_99 <= 1); g_99 += 1)
            { 
                int32_t *l_410 = &g_3;
                struct S0 l_418 = {-1L};
                (*g_95) = l_410;
                for (g_24 = 0; (g_24 <= 1); g_24 += 1)
                { 
                    int32_t *l_411 = &g_3;
                    int32_t *l_412 = &g_155;
                    int32_t *l_413[5] = {&g_3,&g_3,&g_3,&g_3,&g_3};
                    int i;
                    g_414++;
                }
                (*g_288) = (*g_288);
                if (p_45)
                    break;
                for (g_106 = 0; (g_106 <= 1); g_106 += 1)
                { 
                    struct S0 *l_419 = &g_140;
                    int i, j;
                    (*g_95) = l_417;
                    (*l_419) = l_418;
                    if (g_218[g_99][(g_99 + 4)])
                        continue;
                }
            }
            l_427 |= ((*l_417) <= ((safe_lshift_func_uint8_t_u_u(((0x3A89F36769E6BECDLL == (l_423 = p_47)) == ((*l_425) = (l_424 , (*l_417)))), ((*l_426) = g_414))) && 3L));
        }
        else
        { 
            uint8_t *l_484 = &l_84;
            uint8_t **l_486[1][6] = {{(void*)0,(void*)0,&l_484,(void*)0,(void*)0,&l_484}};
            int16_t *l_488 = &l_462;
            uint16_t *l_493 = &g_406[1];
            struct S0 *l_495[5];
            int32_t *l_498 = &g_234;
            uint32_t l_511 = 0x1601FB99L;
            union U1 *l_533 = &g_107[0];
            int32_t l_543[2][6] = {{(-1L),1L,1L,1L,1L,(-1L)},{0xDB96DCF8L,(-1L),1L,(-1L),(-1L),(-1L)}};
            int32_t l_563[2][7][4] = {{{0x872CF7CFL,1L,(-2L),0L},{0x61F5DA5AL,0x2352BCF8L,0L,(-2L)},{0L,0x2352BCF8L,0L,0L},{0x2352BCF8L,1L,7L,0L},{0L,(-2L),0x61F5DA5AL,1L},{0x32BF1DC6L,0x61F5DA5AL,0x61F5DA5AL,0x32BF1DC6L},{0L,0L,7L,0L}},{{0x2352BCF8L,0xC20DDC43L,0L,0xFEEA5D78L},{0L,0xFEEA5D78L,0L,0xFEEA5D78L},{0x61F5DA5AL,0xC20DDC43L,(-2L),0L},{0x872CF7CFL,0L,0xFEEA5D78L,0x32BF1DC6L},{(-2L),0x61F5DA5AL,1L,1L},{(-2L),(-2L),0xFEEA5D78L,0L},{0x872CF7CFL,1L,(-2L),0L}}};
            int32_t l_599 = 0L;
            int32_t **l_649 = &l_417;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_495[i] = &l_466[3][3];
            (*g_96) = (safe_lshift_func_uint16_t_u_u(((((*l_484) = (((*l_488) &= ((g_487 = (g_485 = l_484)) != (g_140 , &g_304[5]))) != (-6L))) , (safe_mod_func_uint16_t_u_u(1UL, (safe_lshift_func_uint8_t_u_u(1UL, 4))))) > ((*l_493) = (0x26B0L <= p_46))), 3));
            g_140 = l_494;
        }
        if ((safe_mul_func_int8_t_s_s((((g_155 || ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((((*l_662) &= (***g_397)) == g_663), (((*g_53) = ((((*l_665) = (l_664 == &g_107[2])) < (p_46 , (g_553 = (l_666 == &g_137)))) <= p_45)) < p_45))), 0x2157L)), (*g_487))) <= g_478[0][1])) || 1UL) & 0xDDL), 255UL)))
        { 
            uint32_t **l_671 = (void*)0;
            int32_t ****l_701[2];
            int32_t *****l_707 = &l_701[0];
            int i;
            for (i = 0; i < 2; i++)
                l_701[i] = &g_397;
            if ((**g_95))
            { 
                int16_t *l_673 = (void*)0;
                int16_t *l_674[5];
                int32_t l_675 = 0L;
                int32_t l_676 = 0x7D8208BCL;
                int32_t ****l_696 = &g_397;
                int i;
                for (i = 0; i < 5; i++)
                    l_674[i] = &g_23;
                (*l_652) ^= 0xA2ED855EL;
                if ((l_676 |= ((((void*)0 == &g_23) > (l_675 = (safe_sub_func_int8_t_s_s((3UL | ((g_272 <= (((((l_671 = l_669) != &l_670[2]) <= (((((((l_672[0][0] > 0xD5L) ^ 0UL) && (*l_662)) >= p_47) , (void*)0) != l_665) | p_46)) < 0x3A97L) & 0xC282ABA05EC20422LL)) >= (***g_397))), 0x7AL)))) < (***g_397))))
                { 
                    int32_t l_684 = 5L;
                    (*l_652) ^= (~((*l_417) ^= (safe_lshift_func_int8_t_s_u(((((safe_div_func_uint32_t_u_u((!(p_47 < l_683)), (g_24 = g_24))) && (l_684 | 0x27L)) ^ ((safe_sub_func_int32_t_s_s((+(((safe_mod_func_uint64_t_u_u((((g_21 |= (g_479[0] >= (&g_304[2] != &g_304[3]))) , g_617) & 0x1CA8C2080DE68BBELL), 0xEF8DA83E8E110F41LL)) , 0L) | (-1L))), g_273)) < (-3L))) < 247UL), p_45))));
                    return p_46;
                }
                else
                { 
                    if (l_84)
                        goto lbl_690;
                }
                if ((l_691 == ((((safe_mul_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(g_526[2][3][5], 0xB9E8L)) , l_696) != (((l_697[0] = (((*l_417) ^ p_46) , l_697[0])) != g_699[4]) , l_701[1])), 0L)) != 0x5B6AD69DD57C685CLL) || l_702) , &g_485)))
                { 
                    struct S0 *l_704 = &l_494;
                    struct S0 **l_703 = &l_704;
                    (*l_703) = &l_466[2][0];
                    return p_47;
                }
                else
                { 
                    return p_46;
                }
            }
            else
            { 
                int64_t *l_705[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_705[i] = (void*)0;
                (*l_662) &= (((*l_652) ^= g_156) == (g_526[2][2][5] = (safe_unary_minus_func_uint8_t_u((*g_487)))));
                for (g_553 = 0; (g_553 <= 6); g_553 += 1)
                { 
                    return (*l_652);
                }
            }
            l_652 = ((*g_95) = (*g_95));
            (*l_707) = &g_397;
        }
        else
        { 
            uint32_t l_715[7];
            union U1 *l_720 = &g_107[0];
            int i;
            for (i = 0; i < 7; i++)
                l_715[i] = 18446744073709551613UL;
            for (g_3 = 23; (g_3 >= (-6)); g_3 = safe_sub_func_uint64_t_u_u(g_3, 1))
            { 
                int16_t l_714 = 1L;
                for (g_385 = 0; (g_385 == (-21)); g_385 = safe_sub_func_uint64_t_u_u(g_385, 2))
                { 
                    int32_t *l_712 = &g_155;
                    int32_t *l_713[4] = {&l_472,&l_472,&l_472,&l_472};
                    int i;
                    l_715[2]++;
                    if (l_715[5])
                        continue;
                }
                for (g_65 = 0; (g_65 != 45); g_65 = safe_add_func_int32_t_s_s(g_65, 9))
                { 
                    if (g_3)
                        goto lbl_690;
                }
                for (g_155 = 1; (g_155 >= 0); g_155 -= 1)
                { 
                    int i, j;
                    if (l_672[g_155][(g_155 + 1)])
                        break;
                    (*l_662) ^= (****g_396);
                }
                if ((*l_662))
                { 
                    return g_336;
                }
                else
                { 
                    l_721 = (l_664 = l_720);
                    (**g_397) = (*g_95);
                    if (p_45)
                        continue;
                }
            }
        }
    }
    for (g_23 = 0; (g_23 != (-20)); --g_23)
    { 
        uint8_t l_725 = 0xBAL;
        if (l_725)
            break;
        (*l_417) = l_725;
    }
    return g_406[0];
}



static const uint16_t  func_59(int8_t  p_60, const int64_t  p_61)
{ 
    int32_t *l_63 = &g_3;
    int32_t l_70 = 0xB9AA6B35L;
    int32_t l_71 = 0L;
    (*l_63) ^= (-9L);
    if ((l_63 != &g_21))
    { 
        int32_t *l_64 = (void*)0;
        int32_t **l_68[3][1][6] = {{{(void*)0,(void*)0,&l_64,(void*)0,(void*)0,&l_64}},{{(void*)0,(void*)0,&l_64,(void*)0,(void*)0,&l_64}},{{(void*)0,(void*)0,&l_64,(void*)0,(void*)0,&l_64}}};
        int i, j, k;
        --g_65;
        (*l_63) ^= 0x51449BABL;
        l_63 = l_64;
        for (g_54 = 0; g_54 < 3; g_54 += 1)
        {
            for (g_23 = 0; g_23 < 1; g_23 += 1)
            {
                for (g_24 = 0; g_24 < 6; g_24 += 1)
                {
                    l_68[g_54][g_23][g_24] = (void*)0;
                }
            }
        }
    }
    else
    { 
        int32_t *l_69[2];
        int i;
        for (i = 0; i < 2; i++)
            l_69[i] = &g_3;
        g_72++;
        return g_72;
    }
    return g_65;
}



static uint32_t  func_80(int32_t  p_81, int64_t  p_82, union U1  p_83)
{ 
    int32_t l_110[6][1][5] = {{{0x7FFF3577L,0x7FFF3577L,0x14D58F1AL,(-6L),0x0A080980L}},{{(-8L),0x0A080980L,0x8ED4FF94L,(-6L),(-6L)}},{{(-6L),4L,(-6L),0x11431463L,0xC214255FL}},{{0x8ED4FF94L,0x0A080980L,(-8L),0xA4DCBD99L,0xC214255FL}},{{0x14D58F1AL,0x7FFF3577L,0x7FFF3577L,0x14D58F1AL,(-6L)}},{{0x5AC0FE8BL,0x14D58F1AL,(-8L),0xC214255FL,0x0A080980L}}};
    int32_t *l_191 = &g_21;
    int16_t *l_250 = &g_23;
    int8_t l_260 = 0x68L;
    int32_t *l_263 = &g_155;
    int32_t *l_264 = &g_3;
    int32_t *l_265 = &g_3;
    int32_t *l_266 = &g_155;
    int32_t *l_267 = &g_3;
    int32_t *l_268 = &g_3;
    int32_t *l_269 = (void*)0;
    int32_t *l_270 = &l_110[0][0][4];
    int32_t *l_271[3];
    int32_t **l_291 = &l_263;
    uint8_t *l_294 = &g_147;
    int32_t l_299 = 0x28D7F249L;
    uint32_t l_309 = 0x8E63D993L;
    int32_t l_345 = 0x75FF9D7EL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_271[i] = &l_110[1][0][3];
    for (p_82 = 0; (p_82 <= 0); ++p_82)
    { 
        uint8_t l_130 = 0x61L;
        int32_t l_142 = 0xE9565209L;
        int32_t l_145[1][7] = {{0xDD911546L,0xDD911546L,0x05428794L,0xDD911546L,0xDD911546L,0x05428794L,0xDD911546L}};
        uint8_t l_163[6] = {0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL};
        int16_t *l_251 = &g_106;
        uint32_t l_259 = 0xB9CE0AD0L;
        int32_t *l_261 = &l_142;
        int32_t *l_262 = &g_155;
        int i, j;
        for (g_23 = 0; (g_23 <= 0); g_23 += 1)
        { 
            int32_t **l_111 = (void*)0;
            int32_t l_144[2][7][4] = {{{0x71FAF2A4L,0x131093E8L,0x99205434L,1L},{(-1L),0x131093E8L,(-1L),(-4L)},{0x131093E8L,0x32EC2C21L,0xC55A7B5EL,(-1L)},{(-1L),1L,0x71FAF2A4L,0x32EC2C21L},{9L,0x71FAF2A4L,0x71FAF2A4L,9L},{(-1L),(-4L),0xC55A7B5EL,(-1L)},{0x131093E8L,(-1L),(-1L),0xBEE733D0L}},{{(-1L),0xBEE733D0L,0x99205434L,0xBEE733D0L},{0x71FAF2A4L,(-1L),1L,(-1L)},{0x53FC6319L,(-4L),0xBEE733D0L,9L},{1L,0x71FAF2A4L,0x32EC2C21L,0x32EC2C21L},{1L,1L,0xBEE733D0L,(-1L)},{0x53FC6319L,0x32EC2C21L,1L,(-4L)},{0x71FAF2A4L,0x131093E8L,0x99205434L,1L}}};
            struct S0 *l_188 = (void*)0;
            int32_t l_192 = (-5L);
            uint8_t l_213[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_213[i] = 0xD3L;
            for (g_24 = 0; (g_24 <= 0); g_24 += 1)
            { 
                union U1 l_120 = {0x4A0BL};
                int16_t l_146 = 0x7E5BL;
                int32_t *l_151 = &l_110[1][0][4];
                int32_t *l_152 = (void*)0;
                int32_t *l_153 = (void*)0;
                int32_t *l_154[6] = {&l_110[(g_24 + 5)][g_23][g_23],&l_110[(g_24 + 5)][g_23][g_23],&l_110[(g_24 + 5)][g_23][g_23],&l_110[(g_24 + 5)][g_23][g_23],&l_110[(g_24 + 5)][g_23][g_23],&l_110[(g_24 + 5)][g_23][g_23]};
                int8_t l_176 = (-5L);
                int i, j, k;
                if ((((void*)0 == l_111) | l_110[(g_24 + 5)][g_23][g_23]))
                { 
                    int16_t *l_121[3][2][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t *l_122 = &l_110[3][0][3];
                    int32_t *l_123 = &g_3;
                    int32_t *l_124 = (void*)0;
                    int32_t *l_125 = &l_110[(g_23 + 2)][g_23][g_23];
                    int32_t *l_126 = (void*)0;
                    int32_t *l_127 = &l_110[(g_23 + 2)][g_23][g_23];
                    int32_t *l_128 = &l_110[4][0][3];
                    int32_t *l_129[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_129[i] = &g_3;
                    (**g_95) = ((safe_mul_func_int16_t_s_s((((l_110[g_24][g_24][(g_23 + 4)] , g_3) , (l_110[g_24][g_24][(g_23 + 4)] = (safe_mod_func_int16_t_s_s((g_106 = (safe_mod_func_uint64_t_u_u(((&g_96 != (void*)0) || ((l_120 , &l_110[(g_24 + 5)][g_23][g_23]) == &l_110[g_24][g_24][(g_23 + 4)])), l_110[5][0][2]))), g_103)))) >= 5L), (-4L))) >= 0UL);
                    if (p_83.f0)
                        break;
                    ++l_130;
                }
                else
                { 
                    int32_t *l_133 = (void*)0;
                    int32_t *l_134 = (void*)0;
                    int32_t *l_135 = (void*)0;
                    int32_t *l_136[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S0 *l_141 = &g_140;
                    int i;
                    --g_137;
                    (*l_141) = g_140;
                    g_147--;
                    if (p_83.f1)
                        continue;
                    return g_150;
                }
                g_156--;
                if (((safe_sub_func_uint8_t_u_u(((l_142 < (safe_sub_func_uint64_t_u_u(l_163[1], (safe_add_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u(p_81, (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((!(p_83.f1 || (!p_83.f0))), g_150)), (safe_div_func_int16_t_s_s(p_83.f0, l_110[2][0][1])))))) > 0L) , 0xC6FEDBD156105C8CLL), 0x41155C20038BE246LL))))) != g_54), l_110[4][0][1])) > (-5L)))
                { 
                    if ((*g_96))
                        break;
                    return p_81;
                }
                else
                { 
                    if (l_176)
                        break;
                    if (p_83.f0)
                        break;
                }
                if ((!(safe_div_func_int64_t_s_s((*l_151), ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_s((l_188 != ((((((safe_sub_func_int64_t_s_s(g_147, 18446744073709551615UL)) , l_120) , l_191) != &g_21) , (**g_95)) , &g_140)), 2)) >= p_82) , p_83.f0), p_83.f1)) < (**g_95)), l_192)), p_83.f1)) || p_83.f0)))))
                { 
                    return p_83.f1;
                }
                else
                { 
                    int64_t *l_210 = &g_140.f0;
                    uint32_t *l_214 = &g_156;
                    int32_t l_215 = 0x1E5EACDDL;
                    uint8_t *l_216 = &l_130;
                    int64_t *l_217 = &g_218[0][2];
                    l_215 = (safe_mod_func_int64_t_s_s(((*l_217) ^= (!((safe_lshift_func_int8_t_s_u((((safe_mod_func_uint8_t_u_u(((*l_216) ^= (safe_mul_func_uint16_t_u_u((((*l_214) = ((((safe_mod_func_int32_t_s_s(((*g_96) = (safe_div_func_int64_t_s_s(((!(!((l_110[1][0][3] |= (((0xA82FL ^ (g_107[2] , (safe_lshift_func_int8_t_s_u((p_82 >= (((*l_210) = (0x88L ^ 0UL)) < 0UL)), 1)))) & (((safe_mod_func_int32_t_s_s(l_213[1], p_83.f0)) | (*g_53)) && 0L)) < g_137)) >= 5UL))) | 7UL), p_82))), 5UL)) || 7UL) && p_83.f1) || 0x8C6651808F800132LL)) != l_215), p_81))), 0x60L)) && 0xD18F96CBL) , 0x48L), p_83.f1)) || (*g_53)))), l_215));
                    if ((*g_96))
                        continue;
                }
            }
            return l_130;
        }
        for (g_140.f0 = 0; (g_140.f0 != 0); g_140.f0 = safe_add_func_uint16_t_u_u(g_140.f0, 3))
        { 
            int32_t *l_221 = &g_3;
            int32_t *l_222 = &l_145[0][4];
            int32_t *l_223 = &l_145[0][3];
            int32_t *l_224 = &l_145[0][3];
            int32_t *l_225 = &l_145[0][4];
            int32_t *l_226 = (void*)0;
            int32_t *l_227 = &l_145[0][3];
            int32_t *l_228 = &g_155;
            int32_t *l_229 = &l_142;
            int32_t *l_230 = &l_145[0][3];
            int32_t *l_231 = &l_110[3][0][2];
            int32_t *l_232 = &l_142;
            int32_t *l_233[2];
            int i;
            for (i = 0; i < 2; i++)
                l_233[i] = &g_3;
            g_235[1][0]--;
            return g_234;
        }
        (*g_96) ^= l_163[1];
        (*l_262) ^= (safe_div_func_int16_t_s_s(((l_110[1][0][2] < ((*l_261) = (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((((**g_95) &= ((((((safe_mul_func_uint8_t_u_u((l_145[0][2] = (((l_250 != l_251) ^ (safe_rshift_func_uint16_t_u_u(p_81, 8))) != l_110[2][0][1])), (safe_div_func_int64_t_s_s(((((+((l_163[1] ^ ((safe_sub_func_uint32_t_u_u(p_82, l_259)) , g_235[1][0])) && g_234)) , 0x42B78B99L) , 0x53L) , l_142), 6UL)))) < l_260) ^ l_110[5][0][0]) > 0x64E550A762820C09LL) , 0xBD84F3E2910136EALL) | p_81)) | l_259), g_140.f0)), 0x7FC215280082912ALL)), 6)), g_234)))) ^ 0x25EFL), p_82));
    }
lbl_295:
    g_274--;
    if ((p_83 , (*l_268)))
    { 
        int64_t l_293 = 3L;
        uint32_t *l_316 = &g_24;
        int32_t *l_339 = &l_110[5][0][0];
        if ((*g_96))
        { 
            uint16_t *l_277 = &g_65;
            int32_t l_281 = 6L;
            const int32_t ***l_290 = &g_288;
            uint16_t *l_292 = &g_103;
            p_81 = ((((((*l_292) = ((*l_264) = (g_140 , ((((*l_277) |= (*l_270)) , ((*l_263) = ((safe_add_func_int16_t_s_s(((!((((*l_270) = p_82) ^ (l_281 ^ ((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_83.f1, (((((g_23 ^= 0L) <= (((*l_290) = g_288) != l_291)) , p_83.f1) != p_82) & 0xB62AL))), 0x4E24L)), g_156)) , g_3))) & (*l_265))) > p_83.f1), p_81)) & p_83.f1))) ^ (*l_267))))) || 0x310DL) >= (-5L)) , p_81) & p_82);
        }
        else
        { 
            int32_t l_333 = 1L;
            (*g_95) = &p_81;
            if (l_293)
            { 
                struct S0 l_296 = {0x903DA8915DD1E5A3LL};
                int32_t l_301[6][6][3] = {{{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)}},{{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)}},{{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)}},{{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)}},{{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)}},{{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)},{(-7L),(-1L),(-1L)}}};
                int i, j, k;
                if (((void*)0 == l_294))
                { 
                    struct S0 *l_297[6][7][6] = {{{&l_296,&l_296,&g_140,&l_296,(void*)0,(void*)0},{&g_140,&l_296,&l_296,&g_140,&g_140,&g_140},{&l_296,(void*)0,&l_296,&l_296,&l_296,&l_296},{(void*)0,(void*)0,&g_140,(void*)0,&l_296,&g_140},{&l_296,(void*)0,&g_140,&l_296,&g_140,&g_140},{&l_296,&l_296,&l_296,&l_296,(void*)0,&g_140},{&l_296,&l_296,&l_296,&l_296,(void*)0,&l_296}},{{&l_296,&l_296,&g_140,&l_296,&g_140,&g_140},{&l_296,&l_296,&g_140,&l_296,&l_296,&g_140},{&g_140,(void*)0,&l_296,(void*)0,(void*)0,&g_140},{&g_140,&g_140,&l_296,&l_296,&l_296,&g_140},{&l_296,&l_296,&g_140,(void*)0,&l_296,&g_140},{(void*)0,&l_296,&g_140,&l_296,&l_296,&l_296},{&l_296,&l_296,&l_296,(void*)0,&l_296,&g_140}},{{&l_296,&l_296,&l_296,&l_296,&l_296,&l_296},{&g_140,&l_296,(void*)0,&g_140,&l_296,&g_140},{(void*)0,&g_140,&g_140,&l_296,(void*)0,&l_296},{(void*)0,(void*)0,&l_296,&g_140,&l_296,&g_140},{&g_140,&l_296,&l_296,&l_296,&g_140,&g_140},{&l_296,(void*)0,(void*)0,(void*)0,&l_296,&g_140},{&l_296,&g_140,(void*)0,&l_296,&g_140,&g_140}},{{(void*)0,&l_296,&l_296,(void*)0,(void*)0,&g_140},{&l_296,&l_296,&l_296,&l_296,&g_140,&l_296},{&g_140,&l_296,&g_140,(void*)0,&g_140,&g_140},{&g_140,&l_296,(void*)0,&l_296,(void*)0,&l_296},{&l_296,&l_296,&l_296,&g_140,&g_140,&g_140},{&l_296,&g_140,&l_296,&l_296,&l_296,&l_296},{&l_296,(void*)0,&g_140,&g_140,&g_140,&g_140}},{{&l_296,&l_296,&g_140,&l_296,&l_296,&g_140},{&g_140,(void*)0,&l_296,(void*)0,(void*)0,&g_140},{&g_140,&g_140,&l_296,&l_296,&l_296,&g_140},{&l_296,&l_296,&g_140,(void*)0,&l_296,&g_140},{(void*)0,&l_296,&g_140,&l_296,&l_296,&l_296},{&l_296,&l_296,&l_296,(void*)0,&l_296,&g_140},{&l_296,&l_296,&l_296,&l_296,&l_296,&l_296}},{{&g_140,&l_296,(void*)0,&g_140,&l_296,&g_140},{(void*)0,&g_140,&g_140,&l_296,(void*)0,&l_296},{(void*)0,(void*)0,&l_296,&g_140,&l_296,&g_140},{&g_140,&l_296,&l_296,&l_296,&g_140,&g_140},{&l_296,(void*)0,&g_140,&l_296,&l_296,&g_140},{&g_140,(void*)0,&g_140,&l_296,&l_296,&l_296},{(void*)0,&l_296,&l_296,(void*)0,&g_140,(void*)0}}};
                    int i, j, k;
                    if (l_293)
                        goto lbl_295;
                    g_140 = l_296;
                }
                else
                { 
                    struct S0 *l_298 = &g_140;
                    int32_t l_300 = 0xD0C9CB34L;
                    int32_t l_302 = 0x4744A534L;
                    int32_t l_303 = 0x13BF90D2L;
                    (*l_298) = ((*l_265) , g_140);
                    g_304[5]--;
                }
                for (g_103 = 0; (g_103 < 8); g_103 = safe_add_func_int32_t_s_s(g_103, 2))
                { 
                    uint16_t *l_317 = &g_107[2].f0;
                    uint16_t *l_334 = &g_65;
                    int8_t l_335 = 4L;
                    l_309++;
                    (*l_264) |= (safe_sub_func_uint16_t_u_u(((1UL < (safe_lshift_func_uint16_t_u_s((((0x40L && (-1L)) > ((&g_24 == l_316) >= (*g_53))) <= ((*l_317)--)), ((safe_lshift_func_uint16_t_u_u((+(safe_lshift_func_uint16_t_u_s(((*l_334) ^= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s((g_218[0][0] & p_81), p_83.f1)) & 0xCBL) >= 1L) & g_72), 0x26348B1DL)) && l_333), l_333)), 0L))), l_335))), g_235[1][0])) & 0xE35B24F8L)))) > 0x0C977F8B95D9890BLL), (*l_266)));
                    --g_336;
                }
            }
            else
            { 
                uint32_t l_344[1][4][2] = {{{0x2CBDC25AL,18446744073709551615UL},{0x2CBDC25AL,0x2CBDC25AL},{18446744073709551615UL,0x2CBDC25AL},{0x2CBDC25AL,18446744073709551615UL}}};
                int i, j, k;
                l_339 = (void*)0;
                if (((0UL < 0xBB4EL) & ((safe_mul_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((l_344[0][3][1] | p_83.f0) && l_333), l_345)) == 18446744073709551615UL) , p_83.f1), p_83.f0)) , l_344[0][3][1])))
                { 
                    return g_346;
                }
                else
                { 
                    return l_333;
                }
            }
            (*l_339) ^= p_81;
        }
    }
    else
    { 
        uint32_t l_351 = 0x9F9F4B57L;
        struct S0 *l_389 = &g_140;
        int32_t l_404[6] = {(-6L),(-6L),0x2069F274L,(-6L),(-6L),0x2069F274L};
        int i;
        for (l_299 = 3; (l_299 >= 0); l_299 -= 1)
        { 
            int32_t l_367 = 0x434B2B7AL;
            int32_t *l_373 = &l_345;
            int i;
            (**l_291) &= (+g_143[l_299]);
            for (g_65 = 0; (g_65 <= 4); g_65 += 1)
            { 
                int32_t *l_348 = &g_3;
                int32_t l_349 = 1L;
                int32_t ***l_356 = &l_291;
                int32_t ****l_357 = &l_356;
                uint32_t *l_366 = &g_24;
                uint8_t *l_394 = &g_304[5];
                int32_t l_405 = 0x876D7F5BL;
                for (g_155 = 4; (g_155 >= 1); g_155 -= 1)
                { 
                    l_348 = &p_81;
                }
                l_351++;
            }
        }
        (*l_389) = g_140;
        return (*l_263);
    }
    return g_147;
}



static uint64_t  func_86(int16_t  p_87, int8_t  p_88, int32_t * p_89, const int16_t  p_90, uint16_t  p_91)
{ 
    int32_t *l_101 = &g_3;
    int32_t *l_102[7] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
    int i;
    g_103++;
    return p_91;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_107[i].f0, "g_107[i].f0", print_hash_value);
        transparent_crc(g_107[i].f1, "g_107[i].f1", print_hash_value);

    }
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_218[i][j], "g_218[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_234, "g_234", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_235[i][j], "g_235[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_304[i], "g_304[i]", print_hash_value);

    }
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_386[i][j][k], "g_386[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_406[i], "g_406[i]", print_hash_value);

    }
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_478[i][j], "g_478[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_479[i], "g_479[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_526[i][j][k], "g_526[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_722.f0, "g_722.f0", print_hash_value);
    transparent_crc(g_722.f1, "g_722.f1", print_hash_value);
    transparent_crc(g_729.f0, "g_729.f0", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    transparent_crc(g_977.f0, "g_977.f0", print_hash_value);
    transparent_crc(g_977.f1, "g_977.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_990[i], "g_990[i]", print_hash_value);

    }
    transparent_crc(g_1136.f0, "g_1136.f0", print_hash_value);
    transparent_crc(g_1136.f1, "g_1136.f1", print_hash_value);
    transparent_crc(g_1170, "g_1170", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
