// SPDX-License-Identifier: MIT
// cctest_csmith_59fc33e8.c --- cctest case csmith_59fc33e8 (csmith seed 1509700584)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x34d9965b */
/* @exp_ticks 0x34b1 */

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

// Options:   -s 1509700584 -o /tmp/csmith_gen_99ps9tck/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
   const int8_t  f1;
   int16_t  f2;
};

union U2 {
   const int8_t  f0;
   uint8_t  f1;
};

union U3 {
   uint32_t  f0;
   uint64_t  f1;
   int64_t  f2;
};

union U4 {
   const int16_t  f0;
   const struct S0  f1;
   uint32_t  f2;
   uint16_t  f3;
};


static int8_t g_2 = 1L;
static int64_t g_3[4] = {0x94B4B13281D21F1ELL,0x94B4B13281D21F1ELL,0x94B4B13281D21F1ELL,0x94B4B13281D21F1ELL};
static int32_t g_6 = 0x6B779C63L;
static int8_t g_12 = 0x4FL;
static int16_t g_23 = 0xE3D4L;
static int32_t g_24[3] = {0x4EB0A117L,0x4EB0A117L,0x4EB0A117L};
static uint8_t g_30[2] = {255UL,255UL};
static uint16_t g_31 = 65535UL;
static union U1 g_44 = {2L};
static struct S0 g_46 = {0x76L};
static uint32_t g_134 = 0x1F153C6AL;
static uint8_t g_146 = 9UL;
static int64_t g_172 = 0L;
static uint32_t g_197 = 0UL;
static union U3 g_237 = {1UL};
static uint64_t g_238 = 4UL;
static union U4 g_290 = {0x13E4L};
static int32_t g_293 = (-8L);



static union U4  func_1(void);
static int16_t  func_17(const int32_t  p_18, uint32_t  p_19);
static const uint16_t  func_32(int32_t  p_33, uint16_t  p_34, uint32_t  p_35, int16_t  p_36);
static uint8_t  func_39(uint8_t  p_40, struct S0  p_41, uint8_t  p_42, union U3  p_43);




static union U4  func_1(void)
{ 
    const struct S0 l_9 = {2L};
    struct S0 l_10 = {0x4AL};
    int32_t l_314 = 7L;
    int32_t l_317 = 0x130829EFL;
    int32_t l_319 = 0x23B53869L;
    int32_t l_320 = (-5L);
    int32_t l_321 = 1L;
    int32_t l_322 = 0x9A846929L;
    int32_t l_357 = 0x028B2EF7L;
    g_3[2] = g_2;
    for (g_2 = 27; (g_2 == 23); --g_2)
    { 
        uint32_t l_13 = 1UL;
        uint32_t l_16 = 0UL;
        int8_t l_20 = 4L;
        int32_t l_316 = (-4L);
        int32_t l_318 = 0L;
        int32_t l_323[1];
        int16_t l_324 = 0x760CL;
        int32_t l_338[2][2] = {{6L,6L},{6L,6L}};
        uint8_t l_359 = 0xF1L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_323[i] = 0x5248648EL;
        for (g_6 = (-30); (g_6 != (-30)); g_6 = safe_add_func_int64_t_s_s(g_6, 7))
        { 
            int32_t l_11 = 6L;
            l_10 = l_9;
            g_12 = ((-1L) == l_11);
        }
        if ((((g_3[2] = l_13) , g_12) == ((safe_mul_func_uint16_t_u_u(l_16, (l_314 |= (func_17(g_2, l_20) == g_2)))) , l_314)))
        { 
            struct S0 l_315 = {6L};
            l_315 = g_290.f1;
        }
        else
        { 
            uint32_t l_325 = 0UL;
            int32_t l_339 = 0x9BA95C35L;
            int32_t l_340 = 0L;
            int32_t l_364 = 0x7F1537B6L;
            l_325--;
            if ((((~(safe_mod_func_int16_t_s_s((((l_325 & (~(safe_mod_func_uint32_t_u_u((g_237.f0++), (safe_div_func_uint64_t_u_u((l_323[0] = 7UL), (l_321 || ((l_320 = ((1L || g_31) ^ 8L)) > g_290.f1.f0)))))))) || g_6) | 0x413FL), 0x5BDBL))) , l_322) && g_24[1]))
            { 
                return g_290;
            }
            else
            { 
                uint64_t l_341[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_341[i] = 3UL;
                ++l_341[0];
                if (g_6)
                    break;
            }
            if (g_290.f3)
            { 
                uint16_t l_356 = 0UL;
                g_24[1] = (l_357 = ((g_237.f0 = l_318) && (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((247UL < (1L ^ (((safe_mod_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((g_46.f0 ^= l_356) < l_356) | 0x53L), 65528UL)), l_338[0][1])), 248UL)) <= l_356) || 1L), l_325)) || g_24[2]) <= g_23))) | l_356), 0xF3F1L)), 0x785A1AA5L))));
            }
            else
            { 
                int32_t l_358 = 0x7C2A5B5BL;
                --l_359;
                l_320 = (0UL || (((safe_mod_func_uint64_t_u_u((l_314 >= (4L != (g_146 == g_293))), 1L)) , l_364) , l_13));
            }
        }
    }
    l_321 ^= l_314;
    return g_290;
}



static int16_t  func_17(const int32_t  p_18, uint32_t  p_19)
{ 
    uint64_t l_21 = 0x48407374FD522803LL;
    int32_t l_22[5] = {1L,1L,1L,1L,1L};
    uint64_t l_25 = 9UL;
    union U3 l_47 = {4294967289UL};
    int32_t l_297 = (-2L);
    int i;
    l_21 = g_12;
    ++l_25;
    if (l_22[3])
    { 
        return p_18;
    }
    else
    { 
        uint16_t l_45 = 0xC9AEL;
        int32_t l_149 = 0x97804E31L;
        g_31 |= (g_6 = (safe_lshift_func_uint16_t_u_u((g_30[1] = g_24[0]), 8)));
        l_297 &= (p_18 && func_32((safe_lshift_func_int8_t_s_u(g_30[1], func_39((g_44 , (l_45 = 255UL)), g_46, g_24[2], l_47))), g_46.f0, l_149, l_22[3]));
        for (l_149 = 1; (l_149 >= 0); l_149 -= 1)
        { 
            uint32_t l_312[4][2] = {{0x09870BFBL,0x09870BFBL},{0x09870BFBL,0x09870BFBL},{0x09870BFBL,0x09870BFBL},{0x09870BFBL,0x09870BFBL}};
            int i, j;
            for (g_44.f2 = 2; (g_44.f2 >= 0); g_44.f2 -= 1)
            { 
                int32_t l_313 = (-1L);
                int i;
                l_313 ^= ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((5L >= (((safe_add_func_int32_t_s_s((((0x8EL < ((safe_add_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(((((((((-4L) && (safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((g_24[g_44.f2] , 0x7C0EL), l_312[2][1])) & 0x03L) && g_6), g_24[g_44.f2]))) <= g_290.f3) , g_172) ^ p_19) || l_149) >= l_149) >= g_44.f1), g_12)) > 0xA547L) , p_18), 0x608C1F7BL)) | p_18)) >= g_24[g_44.f2]) , (-1L)), 0xFA103EE5L)) < g_293) >= 0x0F05B929L)), p_18)), p_18)) >= g_24[g_44.f2]);
                return g_290.f0;
            }
        }
    }
    return l_22[2];
}



static const uint16_t  func_32(int32_t  p_33, uint16_t  p_34, uint32_t  p_35, int16_t  p_36)
{ 
    const uint64_t l_150[5] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};
    int32_t l_174 = 0x336F0E25L;
    int8_t l_175 = 0xDDL;
    int32_t l_178 = 1L;
    int32_t l_191 = 1L;
    int32_t l_195[4];
    union U1 l_243 = {9L};
    struct S0 l_249 = {0x64L};
    int i;
    for (i = 0; i < 4; i++)
        l_195[i] = 0xF4F54AD9L;
lbl_294:
    g_46 = g_46;
    if (l_150[1])
    { 
        uint32_t l_151 = 0xEA4A799CL;
        const union U1 l_154 = {0xF9L};
        int16_t l_173 = 0xA6B1L;
        int32_t l_176 = (-6L);
        int32_t l_177 = (-10L);
        int32_t l_190 = (-9L);
        int32_t l_196 = 0L;
        union U2 l_242 = {1L};
        if ((0xA51EL <= (l_151 & ((0UL != (safe_div_func_int16_t_s_s((((((l_154 , 0x12L) != g_46.f0) > p_36) > l_150[1]) < 0xA979D12DC1848BC0LL), 3UL))) && l_150[1]))))
        { 
            int32_t l_168[4] = {0xF1CAE451L,0xF1CAE451L,0xF1CAE451L,0xF1CAE451L};
            struct S0 l_171[2] = {{0xEBL},{0xEBL}};
            uint64_t l_180 = 0x01C1B6254A217524LL;
            uint16_t l_210 = 0x3357L;
            int i;
            for (g_44.f0 = (-14); (g_44.f0 >= 12); g_44.f0++)
            { 
                g_24[1] = 0L;
            }
            if (((safe_add_func_int16_t_s_s((l_173 = (safe_rshift_func_uint16_t_u_u((g_44.f0 & (safe_add_func_int64_t_s_s((g_172 = ((!(safe_div_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s((g_6 , ((l_168[1] <= ((safe_sub_func_int32_t_s_s((l_171[0] , 0xE91FFD6FL), l_150[1])) > 18446744073709551612UL)) < g_24[1])), 7)) >= 0x88B2FF17L), 0x04953C472D6ACA7BLL))) & 0xF93AE58DA50500D5LL)), g_31))), 11))), g_30[1])) < g_46.f0))
            { 
                int32_t l_179 = 0L;
                l_180++;
                l_179 ^= ((safe_rshift_func_uint16_t_u_s(p_35, 14)) , l_180);
            }
            else
            { 
                int32_t l_185 = 0x99FBD2CEL;
                int32_t l_186 = 0x144486E5L;
                int32_t l_187 = 0x0FA72BBAL;
                int32_t l_188 = 0x3999F76DL;
                int32_t l_189 = 2L;
                int32_t l_192 = 6L;
                int32_t l_193 = (-8L);
                int32_t l_194 = 3L;
                ++g_197;
                l_190 = (safe_add_func_int16_t_s_s((l_168[2] = (g_23 ^= (-1L))), ((p_33 > p_36) == (65532UL != 0x757CL))));
                g_24[2] = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_24[1] | ((safe_lshift_func_int16_t_s_s(0xA5BAL, l_210)) & (g_46 , g_197))), p_33)), 0)), 7));
            }
            l_168[3] = (((l_177 = (g_24[2] || (safe_lshift_func_int8_t_s_u((g_46.f0 = ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((~(safe_mod_func_uint8_t_u_u((g_30[1] = ((l_168[1] == (!(safe_rshift_func_uint8_t_u_s(((g_146 || ((safe_div_func_int16_t_s_s((safe_div_func_int64_t_s_s(((g_238 = (g_237.f0 = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((g_237 , p_34) <= p_33) || p_35), 5)) ^ l_173), 0L)))) >= 1L), 0x6AD60D6B5B7701A7LL)), 0xAC00L)) < p_34)) > p_33), p_36)))) && p_36)), l_191))), g_172)), p_35)) || g_30[1]), 1L)) ^ g_197) < l_150[0]) >= l_175) != 1UL), p_36)), 4)) != l_150[0])), 7)))) ^ l_173) ^ g_31);
        }
        else
        { 
            for (l_176 = 4; (l_176 < (-1)); l_176 = safe_sub_func_int16_t_s_s(l_176, 4))
            { 
                int8_t l_241 = 0x15L;
                l_241 ^= p_36;
                if (p_33)
                    break;
            }
        }
        g_24[1] = (((p_35 == (0x9602L != 2L)) , l_242) , p_36);
        g_24[1] = (l_243 , ((l_195[0] = 0xF2L) <= 0x8EL));
    }
    else
    { 
        uint8_t l_281[5];
        const uint32_t l_291 = 0x58AB2911L;
        int i;
        for (i = 0; i < 5; i++)
            l_281[i] = 0xB0L;
        for (g_146 = 8; (g_146 != 32); g_146 = safe_add_func_uint8_t_u_u(g_146, 8))
        { 
            int32_t l_251 = 5L;
            union U4 l_253[2] = {{0x0234L},{0x0234L}};
            int i;
            if ((safe_rshift_func_uint16_t_u_u(0xEA05L, 14)))
            { 
                struct S0 l_248 = {1L};
                l_249 = l_248;
                l_251 = (+p_36);
                p_33 &= g_12;
            }
            else
            { 
                l_251 = (p_33 , ((g_30[1] == (~(l_253[0] , ((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(0x3FL, 0UL)) >= 0UL), g_172)) && l_150[4]) != 0L) <= l_150[1]), 0x25B8L)), p_33)) == g_146)))) & p_36));
                g_24[2] = (g_6 &= (safe_mul_func_uint8_t_u_u(p_36, p_34)));
            }
            for (g_6 = 0; (g_6 != 14); ++g_6)
            { 
                g_24[2] |= (l_281[3] ^= (safe_lshift_func_uint16_t_u_s((g_237 , ((safe_add_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0x31L, ((((g_12 & (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((!(safe_add_func_uint8_t_u_u(252UL, 0x42L))) || l_253[0].f1.f0), g_134)), 7))) | 18446744073709551607UL) == p_34) <= 0xB9AC39ECL))), 3)) == p_33) & 0x624B0658L), g_238)) & 0x911EL)), p_34)));
            }
            g_6 |= g_23;
        }
        g_24[1] = (0xC59D5B58L || (((p_33 = 0x2F92BE11L) < ((safe_mul_func_int16_t_s_s(l_195[0], p_35)) , p_34)) && 0x58E442EAC8DC0C5FLL));
        for (l_175 = (-30); (l_175 != 10); l_175 = safe_add_func_uint32_t_u_u(l_175, 4))
        { 
            for (p_34 = 0; (p_34 != 54); p_34 = safe_add_func_uint8_t_u_u(p_34, 3))
            { 
                uint8_t l_292 = 0xEAL;
                if (g_30[1])
                    break;
                p_33 ^= (((p_35 < 0x8BB56DCD9579318ALL) != (l_292 = ((g_23 = (safe_div_func_int64_t_s_s(((g_290 , 7UL) | l_291), 0xD199DA16F4BA2F37LL))) & g_6))) > g_293);
            }
            if (g_290.f3)
                goto lbl_294;
        }
    }
    l_195[0] &= (safe_sub_func_uint8_t_u_u(((l_174 = 0x1D4868CC2CD189FCLL) < g_290.f0), 247UL));
    return g_2;
}



static uint8_t  func_39(uint8_t  p_40, struct S0  p_41, uint8_t  p_42, union U3  p_43)
{ 
    int64_t l_61 = (-9L);
    int32_t l_62 = 0xE1E3C1DCL;
    uint16_t l_63 = 6UL;
    int32_t l_95 = 0x24A7E6D0L;
    int32_t l_97 = 0x6C6C4C54L;
    int32_t l_98 = (-6L);
    int32_t l_100 = 0x13354A90L;
    if (((g_24[1] != (((++p_42) < (safe_mul_func_int8_t_s_s((g_6 > (l_62 = (safe_mod_func_uint64_t_u_u(18446744073709551615UL, (safe_mod_func_int32_t_s_s((+(safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((p_40 , g_23) && 0UL), g_30[1])), l_61))), g_46.f0)))))), 4UL))) , 1UL)) , l_63))
    { 
        int8_t l_70 = (-9L);
        l_70 ^= ((((((g_44 , 0x48L) || (safe_mod_func_uint8_t_u_u(g_44.f1, ((((!(safe_mul_func_int8_t_s_s((!0x57C1F20CL), l_61))) ^ g_2) <= 1L) || p_41.f0)))) <= l_63) > g_30[1]) == p_40) <= 0xF1D3L);
        p_41 = p_41;
    }
    else
    { 
        int32_t l_75 = 0xBD9F5B60L;
        int32_t l_90 = (-8L);
        int32_t l_92 = 0L;
        int32_t l_94 = (-3L);
        if ((safe_sub_func_int32_t_s_s(l_61, ((((safe_sub_func_uint32_t_u_u((l_75 > 0x07078C3FL), (-1L))) , (-1L)) , p_40) > l_62))))
        { 
            int32_t l_78 = (-8L);
            p_41 = g_46;
            g_6 = (l_78 = (g_44.f1 == (safe_rshift_func_int8_t_s_u(l_75, 5))));
        }
        else
        { 
            uint8_t l_83[5];
            int32_t l_84 = 0x835AC29FL;
            int8_t l_89[2][2];
            int32_t l_93 = 0x56D7CB4FL;
            int32_t l_96 = 0xB41A2416L;
            int32_t l_99 = 0x8ED0E11BL;
            uint64_t l_101 = 1UL;
            int8_t l_107 = 0xFBL;
            int i, j;
            for (i = 0; i < 5; i++)
                l_83[i] = 1UL;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_89[i][j] = (-7L);
            }
            for (g_23 = 0; (g_23 == (-7)); g_23 = safe_sub_func_uint64_t_u_u(g_23, 7))
            { 
                int32_t l_91 = 0x0679804EL;
                l_84 ^= (safe_div_func_int32_t_s_s(p_43.f0, (p_42 , l_83[1])));
                g_6 = (safe_sub_func_int16_t_s_s(((p_41.f0 , p_41.f0) , 0x1F47L), (safe_rshift_func_int16_t_s_s((((l_90 = (1UL | l_89[0][0])) <= l_91) ^ l_91), l_91))));
            }
            l_101--;
            if (((g_44.f1 , p_42) | (-9L)))
            { 
                uint32_t l_104 = 0UL;
                l_98 = l_84;
                l_104++;
            }
            else
            { 
                int8_t l_127 = (-7L);
                l_94 |= ((l_107 | 0x2945L) , (safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((p_41.f0 = ((safe_mul_func_uint8_t_u_u(l_62, (l_92 , 0x7DL))) > l_84)) >= l_90) | g_44.f0), l_101)), 3)), g_31)))));
                l_62 = (safe_rshift_func_int16_t_s_u((l_93 = (g_23 ^= ((safe_mod_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(p_41.f0, ((safe_lshift_func_int16_t_s_u(((((p_40 != (l_127 = (safe_lshift_func_uint16_t_u_s(65535UL, 9)))) < l_98) <= l_94) != g_31), g_2)) > 0x95L))) > p_42), g_30[1])) || l_127))), 9));
                p_41 = (p_43.f0 , p_41);
            }
        }
        if (p_41.f0)
        { 
            g_24[0] = (0UL == (0x02EBDDE1E780F4AALL | p_43.f0));
            g_24[1] = l_90;
        }
        else
        { 
            int64_t l_133 = (-1L);
            int32_t l_135 = 0xEC10F06FL;
            uint64_t l_136 = 0xEA8E8ED7A3FE0775LL;
            uint64_t l_147 = 0x2F6D8A0C824337CDLL;
            int32_t l_148 = 0x114FAD7DL;
            if ((l_135 = (((0x8E54L > (((0xC9F35A7B369A1ECALL ^ (safe_rshift_func_uint16_t_u_u((g_134 = (0L == (((~(p_43.f0 == l_95)) != g_24[1]) > l_133))), g_24[1]))) , g_134) > g_23)) , g_46.f0) , 0xFF9C57FFL)))
            { 
                l_92 = 0x6058BBDFL;
                l_148 = (l_135 = (l_136 | ((safe_add_func_uint64_t_u_u(((g_146 = (((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((p_43.f0 > (!0x226F77E7A5B985A9LL)), (((((safe_mul_func_uint8_t_u_u(p_41.f0, g_24[1])) == 6UL) , 18446744073709551608UL) ^ g_12) < 0xCDL))), 65535UL)) && l_75) >= g_134)) <= l_147), g_134)) , p_42)));
                return l_136;
            }
            else
            { 
                l_94 = p_43.f0;
            }
        }
    }
    return g_146;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_24[i], "g_24[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_30[i], "g_30[i]", print_hash_value);

    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_44.f1, "g_44.f1", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_237.f0, "g_237.f0", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f1.f0, "g_290.f1.f0", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
