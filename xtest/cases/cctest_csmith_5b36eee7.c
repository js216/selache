// SPDX-License-Identifier: MIT
// cctest_csmith_5b36eee7.c --- cctest case csmith_5b36eee7 (csmith seed 1530326759)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1aad1042 */
/* @exp_ticks 0x66b7 */

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

// Options:   -s 1530326759 -o /tmp/csmith_gen_0ozx2baq/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   uint16_t  f1;
   const int8_t * const  f2;
};

union U2 {
   int64_t  f0;
   int8_t  f1;
   uint64_t  f2;
   struct S0  f3;
   int8_t  f4;
};

union U3 {
   const uint32_t  f0;
   uint8_t  f1;
};

union U4 {
   int8_t  f0;
};


static int32_t g_2 = 0x1BAB5934L;
static union U1 g_12 = {{0L}};
static int32_t g_20[2][6][4] = {{{2L,4L,2L,0x859495E0L},{0x62F63069L,4L,0xB748ABB7L,3L},{4L,1L,1L,4L},{2L,3L,1L,0x859495E0L},{4L,0x62F63069L,0xB748ABB7L,0x62F63069L},{0x62F63069L,1L,2L,0x62F63069L}},{{2L,0x62F63069L,0x859495E0L,0x859495E0L},{3L,3L,0xB748ABB7L,4L},{3L,1L,0x859495E0L,3L},{2L,4L,2L,0x859495E0L},{0x62F63069L,4L,0xB748ABB7L,3L},{4L,1L,0xB748ABB7L,1L}}};
static int32_t g_21 = (-2L);
static int32_t g_22 = 1L;
static int32_t g_23 = (-8L);
static int32_t g_24 = 0x0B91300DL;
static int8_t g_46[4] = {0L,0L,0L,0L};
static uint32_t g_64 = 0x19E54196L;
static int32_t g_70 = 0L;
static uint16_t g_98[1][7][2] = {{{4UL,65531UL},{0x406EL,0x406EL},{0x406EL,65531UL},{4UL,0xB197L},{65531UL,0xB197L},{4UL,65531UL},{0x406EL,0x406EL}}};
static int32_t **g_99 = (void*)0;
static union U4 g_118[5][1][6] = {{{{0x73L},{1L},{-1L},{1L},{0x73L},{0x73L}}},{{{-2L},{1L},{1L},{-2L},{0L},{-2L}}},{{{-2L},{0L},{-2L},{1L},{1L},{-2L}}},{{{0x73L},{0x73L},{1L},{-1L},{1L},{0x73L}}},{{{1L},{0L},{-1L},{-1L},{0L},{1L}}}};
static int32_t *g_122 = &g_70;
static struct S0 g_142 = {0x7EL};
static uint8_t g_157 = 255UL;
static int32_t g_175 = (-1L);
static int32_t g_178 = 0x4A5ECF16L;
static int16_t g_197 = 0L;
static int8_t g_213 = (-1L);
static union U2 g_232[7] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
static union U4 *g_341 = (void*)0;
static union U4 **g_340 = &g_341;
static struct S0 *g_389 = &g_232[0].f3;
static struct S0 **g_388 = &g_389;
static uint16_t **g_462 = (void*)0;
static union U3 g_474 = {8UL};
static union U3 * const g_473 = &g_474;
static union U3 g_476 = {0xD341ACC7L};
static union U3 *g_475 = &g_476;
static int32_t g_505 = (-3L);
static uint64_t g_558 = 0xA5C8D7648CBB0331LL;
static union U1 *g_563 = &g_12;
static union U1 **g_562 = &g_563;
static union U1 ***g_561 = &g_562;
static uint32_t *g_603 = (void*)0;
static uint64_t g_626[7][1] = {{0x5237E7CFD41BEF0CLL},{0xE309EC7B7414839DLL},{0x5237E7CFD41BEF0CLL},{0xE309EC7B7414839DLL},{0x5237E7CFD41BEF0CLL},{0xE309EC7B7414839DLL},{0x5237E7CFD41BEF0CLL}};
static uint8_t g_702 = 0x63L;
static union U1 g_706 = {{0L}};
static uint32_t g_775 = 0x14BC736EL;
static uint16_t g_876 = 65535UL;
static int32_t g_902 = 0xBE474D0FL;
static uint32_t g_921 = 0xFF2CB43EL;
static uint64_t g_970 = 0x5041A997046933A3LL;
static uint32_t g_973 = 0UL;
static int32_t g_1035 = 0x0E57FDF5L;
static const union U2 *g_1130[2][7] = {{&g_232[6],&g_232[6],&g_232[6],&g_232[6],&g_232[6],&g_232[6],&g_232[6]},{&g_232[0],&g_232[0],&g_232[0],&g_232[0],&g_232[0],&g_232[0],&g_232[0]}};
static const union U2 **g_1129[1][4] = {{&g_1130[0][2],&g_1130[0][2],&g_1130[0][2],&g_1130[0][2]}};
static uint32_t g_1142 = 0UL;
static int64_t *g_1185 = &g_232[0].f0;
static int64_t g_1198 = 8L;
static int32_t g_1264 = 0L;
static uint16_t ** const *g_1350 = (void*)0;
static uint16_t ** const **g_1349 = &g_1350;
static int32_t **g_1386 = &g_122;
static const int32_t *g_1389 = &g_24;
static const int32_t **g_1388 = &g_1389;
static int8_t g_1394 = 4L;
static const int32_t g_1395 = 0xBBB0A9B5L;
static uint64_t **g_1402 = (void*)0;
static uint32_t g_1429[6][3] = {{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}};
static union U1 g_1505 = {{1L}};
static uint32_t g_1514 = 0xA08D9548L;
static int16_t **g_1542 = (void*)0;
static const union U4 *g_1648[1] = {&g_118[2][0][5]};
static const union U4 **g_1647 = &g_1648[0];
static const union U4 ***g_1646 = &g_1647;
static const union U4 ****g_1645 = &g_1646;
static int32_t g_1696 = (-2L);
static int16_t ***g_1722 = &g_1542;
static int16_t ****g_1721 = &g_1722;
static uint32_t g_1726 = 0x81EB5364L;



static struct S0  func_1(void);
static int32_t * func_6(union U3  p_7, union U1  p_8, int32_t  p_9, const int8_t * p_10);
static const union U1  func_13(int16_t  p_14);
static int32_t  func_18(const uint8_t  p_19);
static int32_t  func_25(union U3  p_26);
static struct S0  func_32(int8_t  p_33, uint32_t  p_34, uint8_t  p_35, int8_t  p_36);
static uint32_t  func_37(int8_t * p_38, union U2  p_39, uint32_t  p_40, int16_t  p_41, int32_t * p_42);
static int8_t * func_43(union U3  p_44, int64_t  p_45);




static struct S0  func_1(void)
{ 
    const uint8_t l_5[6][3] = {{8UL,255UL,8UL},{1UL,0x3BL,1UL},{8UL,255UL,8UL},{1UL,0x3BL,1UL},{8UL,255UL,8UL},{1UL,0x3BL,1UL}};
    const int8_t *l_1586 = (void*)0;
    int32_t l_1603[7][2][5] = {{{1L,0x3B63CA17L,0xEC089A30L,0x85C7F737L,0xC17E33B5L},{0x50561703L,(-1L),0xA6666118L,0x50561703L,(-10L)}},{{0L,0xB287E364L,0xF3DC7B7EL,0x3B63CA17L,0x3B63CA17L},{0L,0xB287E364L,0L,(-10L),0x50561703L}},{{0x3B63CA17L,(-1L),(-10L),0xC17E33B5L,0x85C7F737L},{0xC17E33B5L,0x3B63CA17L,0x60290ED2L,0L,0L}},{{0L,0L,(-10L),0x85C7F737L,0L},{0L,0xEC089A30L,0L,0xE3033B39L,0x85C7F737L}},{{0xB287E364L,0xE3033B39L,0xF3DC7B7EL,0xE3033B39L,0xB287E364L},{1L,0xC17E33B5L,0xA6666118L,0x85C7F737L,1L}},{{0L,(-1L),0xEC089A30L,0L,(-10L)},{0xE3033B39L,0x50561703L,0xF3DC7B7EL,0xC17E33B5L,1L}},{{0L,0L,1L,(-10L),0xB287E364L},{1L,(-1L),0x85C7F737L,0x3B63CA17L,0x85C7F737L}}};
    uint64_t l_1607 = 0x410A0B5DFB82B3CCLL;
    uint8_t l_1617 = 0xE3L;
    int8_t l_1622 = 0L;
    struct S0 **l_1631 = &g_389;
    uint32_t l_1635 = 4294967294UL;
    union U1 l_1636 = {{0xE9L}};
    struct S0 l_1698 = {1L};
    union U4 l_1729[7] = {{0x62L},{0x62L},{0x62L},{0x62L},{0x62L},{0x62L},{0x62L}};
    union U3 *l_1733[6] = {&g_476,&g_476,&g_476,&g_476,&g_476,&g_476};
    int i, j, k;
    for (g_2 = 23; (g_2 > 15); g_2--)
    { 
        union U3 l_11 = {0xDE6BC044L};
        int32_t l_1601 = 1L;
        int32_t l_1602 = (-5L);
        int32_t l_1604 = 0x3A46B140L;
        int8_t l_1685 = 0L;
        int16_t l_1703 = 0L;
        int64_t *l_1705 = &g_1198;
        uint64_t *l_1706 = (void*)0;
        uint64_t *l_1707 = &g_626[1][0];
        int16_t *l_1708 = &g_197;
        int16_t l_1755[1];
        struct S0 l_1756 = {0x2DL};
        union U4 *l_1757 = &l_1729[0];
        int i;
        for (i = 0; i < 1; i++)
            l_1755[i] = (-4L);
    }
    for (l_1635 = 0; (l_1635 == 26); l_1635 = safe_add_func_int64_t_s_s(l_1635, 3))
    { 
        return (**l_1631);
    }
lbl_1762:
    (*g_122) |= (*g_1389);
    for (g_1035 = (-18); (g_1035 >= 2); g_1035 = safe_add_func_int64_t_s_s(g_1035, 1))
    { 
        if (g_24)
            goto lbl_1762;
    }
    return (**g_388);
}



static int32_t * func_6(union U3  p_7, union U1  p_8, int32_t  p_9, const int8_t * p_10)
{ 
    return (*g_1386);
}



static const union U1  func_13(int16_t  p_14)
{ 
    const union U1 l_17[6] = {{{0xF4L}},{{0xF4L}},{{0xF4L}},{{0xF4L}},{{0xF4L}},{{0xF4L}}};
    int i;
    return l_17[2];
}



static int32_t  func_18(const uint8_t  p_19)
{ 
    int32_t *l_1053[5];
    union U2 *l_1078 = &g_232[0];
    uint16_t *l_1093 = &g_98[0][1][0];
    int8_t l_1140 = 0x05L;
    union U3 l_1149 = {0x46F44D80L};
    uint8_t *l_1158[3][2][2] = {{{&g_702,&g_702},{&g_702,&g_702}},{{&g_702,&g_702},{&g_702,&g_702}},{{&g_702,&g_702},{&g_702,&g_702}}};
    uint8_t l_1159[1];
    union U2 ***l_1162 = (void*)0;
    union U2 ***l_1163 = (void*)0;
    union U2 **l_1165 = &l_1078;
    union U2 ***l_1164 = &l_1165;
    uint8_t l_1204 = 0UL;
    int32_t l_1210 = (-10L);
    uint64_t *l_1241 = &g_626[5][0];
    uint32_t l_1293 = 4294967289UL;
    int32_t l_1335 = (-2L);
    uint16_t ***l_1347[5];
    uint16_t ****l_1346 = &l_1347[0];
    int32_t **l_1387 = &g_122;
    union U1 l_1416 = {{0x4CL}};
    struct S0 **l_1475 = (void*)0;
    uint32_t l_1492 = 0x7829EF45L;
    uint32_t l_1551 = 0x968CC390L;
    int64_t l_1585 = 0x6D7FCD66A6ED80C3LL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1053[i] = &g_505;
    for (i = 0; i < 1; i++)
        l_1159[i] = 1UL;
    for (i = 0; i < 5; i++)
        l_1347[i] = &g_462;
    for (g_21 = 1; (g_21 >= 0); g_21 -= 1)
    { 
        union U3 l_27 = {4294967295UL};
        int32_t *l_1095 = (void*)0;
        union U2 * const *l_1114[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1078,(void*)0,&l_1078,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1078,(void*)0,&l_1078,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        union U4 *l_1133 = &g_118[0][0][1];
        int32_t l_1134[6] = {(-4L),0x5CC51B86L,(-4L),(-4L),0x5CC51B86L,(-4L)};
        uint32_t l_1136[6];
        int16_t l_1141 = 0xAFB4L;
        int i, j;
        for (i = 0; i < 6; i++)
            l_1136[i] = 0x154EE808L;
        for (g_22 = 1; (g_22 >= 0); g_22 -= 1)
        { 
            int32_t *l_1051 = &g_22;
            int32_t *l_1057[1][4];
            union U2 *l_1081 = &g_232[1];
            union U3 l_1116 = {4294967293UL};
            int8_t *l_1123 = &g_118[0][0][1].f0;
            int8_t **l_1122 = &l_1123;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1057[i][j] = &g_505;
            }
            for (g_23 = 1; (g_23 >= 0); g_23 -= 1)
            { 
                int32_t l_1062 = 4L;
                union U1 ** const l_1069 = (void*)0;
                struct S0 l_1097 = {-1L};
                for (g_24 = 0; (g_24 <= 1); g_24 += 1)
                { 
                    int32_t **l_1052 = &l_1051;
                    int32_t **l_1054 = &l_1053[3];
                    int32_t **l_1055 = (void*)0;
                    int32_t **l_1056 = (void*)0;
                    int i, j, k;
                }
            }
            if ((*g_122))
                break;
        }
        g_1142++;
        return l_27.f1;
    }
    for (g_702 = 16; (g_702 > 30); g_702 = safe_add_func_uint16_t_u_u(g_702, 5))
    { 
        return p_19;
    }
    (*g_122) = (safe_lshift_func_int16_t_s_u((l_1149 , 0x91F1L), (safe_add_func_uint16_t_u_u(p_19, ((*l_1093) |= ((safe_add_func_uint32_t_u_u(p_19, (((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((l_1159[0] = p_19) , ((safe_mul_func_int8_t_s_s(p_19, p_19)) && 0xE7L)), p_19)), (*g_122))) , l_1093) != (void*)0))) < 0x20ADD79AL))))));
    (*l_1164) = &l_1078;
    for (g_558 = 0; (g_558 <= 0); g_558 += 1)
    { 
        union U3 l_1173 = {0x78164E9DL};
        const int64_t **l_1179 = (void*)0;
        const int64_t **l_1180 = (void*)0;
        const int64_t *l_1182 = (void*)0;
        const int64_t **l_1181 = &l_1182;
        int64_t *l_1184 = &g_232[0].f0;
        int64_t **l_1183 = &l_1184;
        uint64_t *l_1186 = &g_626[2][0];
        int32_t l_1190 = 0x1A3DD5F5L;
        uint32_t l_1191 = 0UL;
        struct S0 *l_1194 = &g_12.f0;
        int32_t l_1201[3];
        int64_t l_1202[4];
        uint32_t l_1235 = 4294967295UL;
        union U2 ***l_1277 = &l_1165;
        int8_t l_1292 = 0xA0L;
        int8_t *l_1298 = &g_232[0].f3.f0;
        uint16_t * const *l_1353 = &l_1093;
        int64_t l_1371 = 0xB3A635716585540DLL;
        int32_t *l_1396 = &g_20[0][0][1];
        uint32_t l_1415[3][5];
        union U4 l_1448 = {6L};
        int16_t l_1497 = 0x2524L;
        uint64_t l_1499 = 0UL;
        uint16_t l_1510 = 1UL;
        int16_t *l_1540 = (void*)0;
        int16_t **l_1539[6] = {&l_1540,&l_1540,&l_1540,&l_1540,&l_1540,&l_1540};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1201[i] = 0x146FE1ECL;
        for (i = 0; i < 4; i++)
            l_1202[i] = 0x1D6AEBA0B7D7D0FFLL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
                l_1415[i][j] = 0x809DA520L;
        }
        if ((safe_sub_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((!(0L || ((*l_1186) = ((0x30L > (safe_mod_func_uint8_t_u_u(l_1159[g_558], (l_1173 , l_1173.f1)))) || ((safe_div_func_int32_t_s_s((!(safe_sub_func_uint32_t_u_u((((((*l_1181) = (void*)0) == (g_1185 = ((*l_1183) = (void*)0))) <= p_19) > (-1L)), 0xD0467AD2L))), (-1L))) , l_1173.f0))))), 15)) != g_98[0][2][0]) & p_19), p_19)))
        { 
            uint32_t l_1187 = 3UL;
            l_1187--;
        }
        else
        { 
            int8_t l_1195 = 0x81L;
            int32_t l_1196 = 0L;
            int32_t l_1197 = 0x90AF2B7FL;
            int32_t l_1199 = 1L;
            int32_t l_1200 = 0x0FD62865L;
            int32_t l_1203 = 0L;
            l_1191--;
            (*g_388) = l_1194;
            --l_1204;
            (*g_562) = (**g_561);
            if (l_1199)
                break;
        }
    }
    return (**l_1387);
}



static int32_t  func_25(union U3  p_26)
{ 
    uint32_t l_30[2][4][7] = {{{2UL,0xB6EA1325L,0x80D7777BL,0UL,0xFC5C2F00L,0x4C1A1FD2L,0x4C1A1FD2L},{0x80D7777BL,0xB6EA1325L,2UL,0xB6EA1325L,0x80D7777BL,0UL,0xFC5C2F00L},{5UL,3UL,0xB6EA1325L,0UL,0x70FEEA38L,0UL,0xB6EA1325L},{0xFC5C2F00L,0xFC5C2F00L,0xA33ED863L,2UL,3UL,0x4C1A1FD2L,5UL}},{{5UL,0UL,0xA33ED863L,0xA33ED863L,0UL,5UL,0x70FEEA38L},{0x80D7777BL,0xA33ED863L,0xB6EA1325L,0x70FEEA38L,3UL,3UL,0x70FEEA38L},{2UL,18446744073709551615UL,2UL,0x4C1A1FD2L,0x70FEEA38L,0x80D7777BL,5UL},{0xB6EA1325L,0xA33ED863L,0x80D7777BL,0x4C1A1FD2L,0x80D7777BL,0xA33ED863L,0xB6EA1325L}}};
    int32_t *l_52 = &g_22;
    uint16_t ****l_478 = (void*)0;
    union U1 l_490[7] = {{{0xC3L}},{{0x3CL}},{{0x3CL}},{{0xC3L}},{{0x3CL}},{{0x3CL}},{{0xC3L}}};
    int32_t l_552 = 0x7271939DL;
    int32_t l_557 = (-4L);
    union U2 l_580 = {-6L};
    int32_t l_687 = 0x70BE0550L;
    int32_t l_688 = (-9L);
    int32_t l_691 = 0xB771E88BL;
    int32_t l_693 = 0xE3A41176L;
    int32_t l_694 = 0x5FC07F99L;
    int32_t l_695 = 0xE42AFB92L;
    int32_t l_697 = 0x6E70A488L;
    int32_t l_699 = 0x5425C1C3L;
    int32_t l_700 = (-1L);
    int32_t l_701 = 0x9759AFA7L;
    int32_t *l_707 = &g_22;
    int8_t *l_721[4][3] = {{&g_706.f0.f0,&g_706.f0.f0,&g_706.f0.f0},{&g_46[3],&g_46[3],&g_46[3]},{&g_706.f0.f0,&g_706.f0.f0,&g_706.f0.f0},{&g_46[3],&g_46[3],&g_46[3]}};
    uint64_t l_730 = 0x565A50B2D8AF944FLL;
    uint8_t l_753 = 0xB0L;
    uint64_t l_893[5];
    int32_t l_908[3][5] = {{0xBE225E1AL,0xE01829D0L,0xBE225E1AL,0xBE225E1AL,0xE01829D0L},{0xF1290CB9L,0xD8CFF598L,0xD8CFF598L,0xF1290CB9L,0xD8CFF598L},{0xE01829D0L,0xE01829D0L,1L,0xE01829D0L,0xE01829D0L}};
    uint64_t l_953 = 0x8DBE8D2BFB089C43LL;
    const int32_t l_960 = 0xEF7C60F6L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_893[i] = 0x8A797BA2DC552474LL;
    for (p_26.f1 = 0; (p_26.f1 == 18); ++p_26.f1)
    { 
        int32_t *l_31 = &g_20[0][1][2];
        union U2 l_71 = {-1L};
        int32_t **l_477 = &l_31;
        uint32_t l_502[1];
        struct S0 l_511 = {-3L};
        int32_t l_554[1];
        union U4 *l_605 = (void*)0;
        uint16_t l_631 = 0xB512L;
        int i;
        for (i = 0; i < 1; i++)
            l_502[i] = 0x251597FAL;
        for (i = 0; i < 1; i++)
            l_554[i] = 6L;
    }
    (*g_122) = p_26.f1;
    if ((((safe_mod_func_uint64_t_u_u(0x4D2A14E2C8C9D620LL, (*l_707))) <= 0xDC4A30F026EA3782LL) == p_26.f1))
    { 
        int8_t **l_722 = &l_721[2][0];
        int8_t *l_723[3];
        uint32_t **l_724 = &g_603;
        uint64_t *l_727 = &g_626[2][0];
        uint64_t **l_728 = &l_727;
        uint64_t *l_729 = (void*)0;
        int32_t l_731 = (-1L);
        uint16_t *l_732 = &g_706.f1;
        int32_t *l_769 = &l_731;
        int32_t l_838 = 5L;
        int32_t l_840 = (-9L);
        int32_t l_841 = 0L;
        int32_t l_845 = (-4L);
        int32_t l_846 = 0x2BD15563L;
        int32_t l_849[1];
        union U2 *l_938[7][1][5] = {{{&g_232[0],&g_232[0],&g_232[0],&g_232[0],&l_580}},{{&l_580,&l_580,&l_580,&g_232[1],&l_580}},{{&g_232[0],&l_580,&g_232[0],(void*)0,&g_232[0]}},{{(void*)0,(void*)0,&l_580,&g_232[1],&l_580}},{{&g_232[4],&l_580,&l_580,&g_232[0],&g_232[0]}},{{&g_232[0],&l_580,&g_232[0],&l_580,&g_232[0]}},{{&g_232[1],&l_580,&l_580,&g_232[0],&l_580}}};
        union U3 *l_941 = &g_476;
        struct S0 *l_974 = &g_706.f0;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_723[i] = &l_580.f1;
        for (i = 0; i < 1; i++)
            l_849[i] = (-9L);
        if ((((*l_732) = (((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((0x302361D71CBB042BLL | (((((*l_722) = l_721[2][0]) == l_723[1]) >= 0L) > ((l_724 != (void*)0) || (safe_mod_func_uint16_t_u_u((((*l_728) = l_727) == l_729), g_46[3]))))), g_2)), l_730)), p_26.f1)) <= l_731) < 0xBD324FD0L)) & 0xA89BL))
        { 
            struct S0 l_733 = {0x8FL};
            uint32_t *l_754 = &g_64;
            uint8_t *l_755 = &g_476.f1;
            union U4 l_766 = {0x7CL};
            uint64_t * const l_774[5] = {&g_558,&g_558,&g_558,&g_558,&g_558};
            int32_t l_792 = 1L;
            uint16_t l_793[3];
            int64_t l_806[5][7] = {{0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL},{0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL},{0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL},{0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL,0x3B939105FC891014LL},{0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL,0x88737E84C94A9DC7LL,0x16543DB005DF7BB9LL}};
            int64_t l_826 = 0x0CBF075878D56F81LL;
            int32_t l_834 = 0x28DF1926L;
            int32_t l_836 = (-6L);
            int32_t l_843 = 0x24BFFA6AL;
            int32_t l_844 = 1L;
            int32_t l_847 = (-1L);
            int32_t l_848 = 0xDB4A199FL;
            int32_t l_855[7][6] = {{7L,0L,7L,7L,0L,7L},{7L,0L,7L,7L,0L,7L},{7L,0L,7L,7L,0L,7L},{7L,0L,7L,7L,0L,7L},{7L,0L,7L,7L,0L,7L},{7L,0L,7L,7L,0L,7L},{7L,0L,7L,7L,0L,7L}};
            uint16_t l_858 = 0x27B7L;
            uint64_t l_877[1];
            int32_t l_906 = (-3L);
            int64_t l_920 = (-4L);
            union U2 *l_937 = &g_232[0];
            union U3 **l_942 = &g_475;
            int16_t *l_969[2];
            int i, j;
            for (i = 0; i < 3; i++)
                l_793[i] = 0x7C76L;
            for (i = 0; i < 1; i++)
                l_877[i] = 1UL;
            for (i = 0; i < 2; i++)
                l_969[i] = &g_197;
            (**g_388) = l_733;
            (*g_388) = &l_733;
        }
        else
        { 
            (*g_388) = l_974;
        }
    }
    else
    { 
        int32_t l_979 = 2L;
        int32_t l_986[1];
        union U2 l_996[5] = {{2L},{2L},{2L},{2L},{2L}};
        union U1 l_1046 = {{0L}};
        int i;
        for (i = 0; i < 1; i++)
            l_986[i] = 0x806CA7D8L;
lbl_1010:
        for (l_580.f0 = 0; (l_580.f0 >= (-14)); l_580.f0 = safe_sub_func_uint64_t_u_u(l_580.f0, 1))
        { 
            int32_t *l_980 = &l_979;
            int32_t *l_981 = &l_552;
            int32_t *l_982 = (void*)0;
            int32_t *l_983 = (void*)0;
            int32_t *l_984 = &l_694;
            int32_t *l_985[3];
            uint16_t l_987 = 2UL;
            int32_t *l_990 = &l_908[1][3];
            int32_t **l_991 = &l_707;
            union U1 l_997 = {{0xA8L}};
            uint8_t *l_1002 = &g_476.f1;
            uint64_t *l_1007 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_985[i] = &g_178;
            l_979 = ((safe_rshift_func_int8_t_s_s(0x9DL, 3)) >= 0xE75978BAL);
            l_987--;
            (*l_991) = (l_990 = &g_178);
            (*l_984) |= ((safe_mul_func_uint16_t_u_u((l_986[0] |= ((((safe_lshift_func_int8_t_s_s((0UL & (l_996[2] , (((((l_997 , (g_626[1][0] = ((safe_sub_func_uint64_t_u_u((l_490[2].f0 , (safe_sub_func_int8_t_s_s((-9L), (--(*l_1002))))), (p_26.f1 != (safe_rshift_func_int16_t_s_u(3L, 1))))) , g_876))) , 65535UL) ^ p_26.f1) < g_178) && p_26.f1))), 1)) > g_702) <= p_26.f1) || g_474.f1)), 0xCA2AL)) , (*g_122));
        }
        for (g_921 = 0; (g_921 <= 0); g_921 += 1)
        { 
            return p_26.f1;
        }
        for (g_876 = (-24); (g_876 >= 39); ++g_876)
        { 
            int32_t **l_1017 = &g_122;
            struct S0 l_1050[6][5] = {{{1L},{0L},{-2L},{-2L},{0L}},{{1L},{0L},{-2L},{-2L},{0L}},{{1L},{0L},{-2L},{-2L},{0L}},{{1L},{0L},{-2L},{-2L},{0L}},{{1L},{0L},{-2L},{-2L},{0L}},{{1L},{0L},{-2L},{-2L},{0L}}};
            int i, j;
            if (p_26.f1)
            { 
                int32_t **l_1011 = &g_122;
                union U4 ***l_1012 = &g_340;
                int16_t *l_1020 = &g_197;
                int64_t *l_1022 = &l_996[2].f0;
                int32_t *l_1023 = &l_691;
                if (g_702)
                    goto lbl_1010;
                (*l_1011) = (void*)0;
                (*l_1023) |= (((*l_1012) = &g_341) == ((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((((g_626[1][0] , &l_52) != l_1017) > (p_26.f1 < (((*l_1020) ^= g_98[0][6][1]) >= (!((*l_1022) = (g_232[0].f0 & p_26.f1)))))) > 0L) != 1L), p_26.f1)), p_26.f1)) , (void*)0));
                g_1035 = ((*l_1023) = (safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(0xBAL, (safe_mul_func_int8_t_s_s((*l_52), p_26.f1)))) != ((((g_970 > (!(*l_1023))) | (g_118[0][0][1].f0 |= ((((((*l_1023) ^ (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_26.f1, 6UL)), g_970))) ^ 0x94L) & 65535UL) != p_26.f1) , p_26.f1))) , 1L) >= (*l_52))), 0x87B2949B4DAC16EELL)));
                for (g_973 = 0; (g_973 == 12); g_973 = safe_add_func_int16_t_s_s(g_973, 4))
                { 
                    uint64_t *l_1039 = &l_893[2];
                    uint64_t **l_1038 = &l_1039;
                    uint8_t *l_1047 = &g_157;
                    (*l_1023) = (((*l_1038) = (void*)0) == &l_953);
                    l_986[0] = (safe_add_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s((((((l_580 , g_921) , ((safe_mod_func_uint16_t_u_u((0xE7L == (l_1046 , ((*l_1047) = (*l_52)))), ((safe_div_func_uint64_t_u_u(g_118[0][0][1].f0, l_979)) & p_26.f1))) < 0x1883L)) , p_26.f1) > p_26.f1) & 0xAEF3532B0C5943D0LL), 252UL)) <= 0x5CL) < 0x9AC5L), g_20[0][0][1]));
                    l_1050[3][3] = (**g_388);
                    return (*l_52);
                }
            }
            else
            { 
                return (*g_122);
            }
            l_979 = ((void*)0 != l_707);
            return (*l_52);
        }
        (*g_122) = 0xAE84E121L;
    }
    return p_26.f1;
}



static struct S0  func_32(int8_t  p_33, uint32_t  p_34, uint8_t  p_35, int8_t  p_36)
{ 
    int32_t *l_343[6];
    uint16_t l_344 = 0x71EEL;
    int32_t l_350 = (-1L);
    struct S0 l_366[2] = {{2L},{2L}};
    uint16_t l_372 = 0xF4E8L;
    const struct S0 * const *l_387 = (void*)0;
    int16_t * const l_400 = &g_197;
    uint16_t l_401 = 1UL;
    struct S0 ***l_433 = &g_388;
    union U4 *l_435 = &g_118[0][0][1];
    int8_t l_441 = 0x20L;
    int32_t l_466[5][6] = {{3L,(-7L),3L,(-7L),3L,(-7L)},{0L,(-7L),0L,(-7L),0L,(-7L)},{3L,(-7L),3L,(-7L),3L,(-7L)},{0L,(-7L),0L,(-7L),0L,(-7L)},{3L,(-7L),3L,(-7L),3L,(-7L)}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_343[i] = &g_70;
lbl_452:
    ++l_344;
    for (g_70 = 5; (g_70 >= 2); g_70 -= 1)
    { 
        int32_t **l_347 = &l_343[2];
        int32_t **l_348 = &g_122;
        int32_t l_353 = 0x504D460EL;
        int32_t l_354 = (-10L);
        int32_t l_357 = 0L;
        int32_t l_358 = 3L;
        int32_t l_359[7][4] = {{0x538E928FL,0x538E928FL,0xFA275461L,1L},{0x4317772AL,0L,0x538E928FL,8L},{0xF4D276ECL,0xEE335FE2L,0xD7449F6CL,0x538E928FL},{0x76158311L,0xEE335FE2L,0x76158311L,8L},{0xEE335FE2L,0L,0x0C735065L,1L},{1L,0x538E928FL,0xF4D276ECL,0L},{0x6D0633EEL,0xF4D276ECL,0xF4D276ECL,0x6D0633EEL}};
        int64_t l_360[1][3];
        union U4 l_386 = {0xDDL};
        union U3 l_397 = {6UL};
        struct S0 l_404 = {0L};
        const uint32_t l_417[4] = {0x3336F285L,0x3336F285L,0x3336F285L,0x3336F285L};
        const uint8_t l_418[2][7] = {{7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL}};
        uint16_t l_449 = 65531UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_360[i][j] = 0L;
        }
        (*l_348) = ((*l_347) = l_343[g_70]);
        for (g_64 = 0; (g_64 <= 1); g_64 += 1)
        { 
            int16_t l_349 = (-1L);
            int32_t l_351 = 0x0AF16905L;
            int32_t l_352 = 0xC9D79BECL;
            int32_t l_355 = 1L;
            int32_t l_356[7][4][5] = {{{0xB5B332C8L,0xE1A7CE52L,0x508D13B4L,0L,0x91E8C467L},{3L,0xBED504CFL,(-1L),(-1L),0xBED504CFL},{0xC66C7257L,0xE2C84D73L,0x484164E1L,0xE1A7CE52L,0x91E8C467L},{0x15B3629CL,(-1L),0x77F6988AL,0L,0x77F6988AL}},{{0x91E8C467L,0x91E8C467L,0xB5B332C8L,0xC66C7257L,0xAAC966BDL},{0x15B3629CL,0x54FA1BACL,3L,0x36A9C6B7L,0x36A9C6B7L},{0xC66C7257L,0x0FE7DAA4L,0xC66C7257L,0xD19F1299L,0L},{3L,0x54FA1BACL,0x15B3629CL,0xBED504CFL,0x21BBBA73L}},{{0xB5B332C8L,0x91E8C467L,0x91E8C467L,0xB5B332C8L,0xC66C7257L},{0x77F6988AL,(-1L),0x15B3629CL,0x21BBBA73L,0x54FA1BACL},{0x484164E1L,0xE2C84D73L,0xC66C7257L,0xE2C84D73L,0x484164E1L},{(-1L),0xBED504CFL,3L,0x21BBBA73L,0x7E04D561L}},{{0x508D13B4L,0xE1A7CE52L,0xB5B332C8L,0xB5B332C8L,0xE1A7CE52L},{0x36A9C6B7L,0x15B3629CL,0x77F6988AL,0xBED504CFL,0x7E04D561L},{0xE2C84D73L,0xB5B332C8L,0x484164E1L,0xD19F1299L,0x484164E1L},{0x7E04D561L,0x7E04D561L,(-1L),0x36A9C6B7L,0x54FA1BACL}},{{0xE2C84D73L,0xAAC966BDL,0x508D13B4L,0xC66C7257L,0xC66C7257L},{0x36A9C6B7L,0L,0x36A9C6B7L,0L,0x21BBBA73L},{0x508D13B4L,0xAAC966BDL,0xE2C84D73L,0xE1A7CE52L,0L},{(-1L),0x7E04D561L,0x7E04D561L,(-1L),0x36A9C6B7L}},{{0x484164E1L,0xB5B332C8L,0xE2C84D73L,0L,0xAAC966BDL},{0x77F6988AL,0x15B3629CL,0x36A9C6B7L,0x15B3629CL,0x77F6988AL},{0xB5B332C8L,0xE1A7CE52L,0x508D13B4L,0L,0x91E8C467L},{3L,0xBED504CFL,(-1L),(-1L),0xBED504CFL}},{{0xC66C7257L,0xE2C84D73L,0x484164E1L,0xE1A7CE52L,0x91E8C467L},{0x15B3629CL,(-1L),0x77F6988AL,0L,0x77F6988AL},{0x91E8C467L,0x91E8C467L,0xB5B332C8L,0xC66C7257L,0xAAC966BDL},{0x15B3629CL,0x54FA1BACL,3L,0x36A9C6B7L,0x36A9C6B7L}}};
            uint32_t l_361 = 4294967288UL;
            int i, j, k;
            l_361++;
            for (l_351 = 6; (l_351 >= 0); l_351 -= 1)
            { 
                int32_t *** const l_364 = &l_348;
                int32_t l_367[3];
                union U1 l_377 = {{-6L}};
                const int64_t l_391 = 0xADF1F39E0C308B3ALL;
                int i;
                for (i = 0; i < 3; i++)
                    l_367[i] = 7L;
                for (l_353 = 0; l_353 < 1; l_353 += 1)
                {
                    for (l_358 = 0; l_358 < 7; l_358 += 1)
                    {
                        for (l_354 = 0; l_354 < 2; l_354 += 1)
                        {
                            g_98[l_353][l_358][l_354] = 0xC95FL;
                        }
                    }
                }
                if (((void*)0 != l_364))
                { 
                    if ((***l_364))
                        break;
                    if (l_349)
                        continue;
                }
                else
                { 
                    struct S0 *l_365[7][2] = {{&g_142,&g_142},{&g_142,&g_142},{&g_142,&g_142},{&g_142,&g_142},{&g_142,&g_142},{&g_142,&g_142},{&g_142,&g_142}};
                    int32_t l_368 = 0L;
                    int32_t l_369 = 0x6F641EF5L;
                    int32_t l_370 = 0x5CBA5762L;
                    int32_t l_371[2][2][2] = {{{0x9974F008L,0x9974F008L},{0x9974F008L,0x9974F008L}},{{0x9974F008L,0x9974F008L},{0x9974F008L,0x9974F008L}}};
                    int i, j, k;
                    l_366[0] = g_142;
                    --l_372;
                    l_371[0][1][1] ^= p_36;
                    g_20[0][3][1] = (safe_sub_func_int16_t_s_s(l_356[5][2][3], 5UL));
                }
                for (g_197 = 0; (g_197 <= 6); g_197 += 1)
                { 
                    const union U3 l_390 = {1UL};
                    int8_t *l_392 = &l_377.f0.f0;
                    (**l_364) = (*l_348);
                    l_352 ^= (l_377 , (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(((((*l_392) = (((((1L && ((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((((g_118[4][0][1] = l_386) , l_387) == g_388), p_36)), (l_390 , g_232[0].f3.f0))) , p_36)) == p_36) , l_391) <= 0x615C0B618C888C93LL) > p_33)) != 0x0EL) <= l_390.f0), 0)), (***l_364))));
                }
                for (l_349 = 0; (l_349 <= 3); l_349 += 1)
                { 
                    int16_t *l_399 = &g_197;
                    int16_t **l_398 = &l_399;
                    int i, j, k;
                    l_367[g_64] ^= (safe_lshift_func_uint8_t_u_s(255UL, (((safe_add_func_uint8_t_u_u(((l_397 , &g_157) != &p_35), (((((*l_398) = &g_197) != l_400) == 65535UL) && 0x5874L))) != l_356[g_70][(g_64 + 2)][(l_349 + 1)]) | l_356[l_351][l_349][(g_64 + 1)])));
                }
            }
            l_401--;
            g_20[1][0][1] = (&l_386 != (*g_340));
            return l_404;
        }
        if ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(0x643609B45B6BA929LL, ((safe_div_func_int8_t_s_s((((void*)0 == &g_99) > p_33), (((safe_mul_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(l_417[3], 0UL)) < ((p_35 >= l_418[0][1]) ^ g_64)), 0xC4DB982C43A2425ELL)) <= g_21), g_46[0])) , g_2) , 0x22L))) | g_178))), 5)))
        { 
            struct S0 ****l_434 = &l_433;
            const union U4 *l_436 = &g_118[0][0][1];
            int8_t *l_437 = &g_118[0][0][1].f0;
            int32_t l_438 = (-6L);
            int32_t l_439 = (-1L);
            int32_t l_440 = 0xF2A6C5E0L;
            int32_t l_442 = (-7L);
            int32_t l_443 = 5L;
            int32_t l_444 = 0xEC96C756L;
            int32_t l_445 = (-3L);
            int32_t l_446 = 0x44304EA8L;
            int32_t l_447 = 0xB7C3B76BL;
            int32_t l_448[4];
            int i;
            for (i = 0; i < 4; i++)
                l_448[i] = 1L;
            for (l_358 = 1; (l_358 >= 0); l_358 -= 1)
            { 
                return l_404;
            }
            l_438 = (safe_add_func_uint64_t_u_u((g_70 > ((safe_mul_func_int16_t_s_s(g_98[0][6][1], (0xCFL > (((safe_div_func_uint64_t_u_u(((0xBDL > ((*l_437) = (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((255UL && (((*l_434) = l_433) != &g_388)), p_36)) , l_435) == l_436), p_35)), 0xD8L)))) < g_12.f0.f0), (**l_348))) , &l_386) == (*g_340))))) && 0xC4B885DE97BBA10BLL)), (**l_347)));
            --l_449;
            for (g_64 = 0; (g_64 <= 1); g_64 += 1)
            { 
                if (l_397.f1)
                    goto lbl_452;
                return (**g_388);
            }
        }
        else
        { 
            g_178 = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(0xAFL, 6)), 4)) & (safe_mod_func_int64_t_s_s(g_22, 4UL)));
        }
        for (l_358 = 0; (l_358 <= 1); l_358 += 1)
        { 
            uint16_t *l_464 = &g_98[0][3][0];
            uint16_t **l_463 = &l_464;
            uint16_t ***l_465 = &g_462;
            int32_t * const l_467 = &g_175;
            l_359[3][1] = (!((safe_lshift_func_int16_t_s_s(((*l_400) &= 0x00CFL), 3)) != (**l_347)));
            (*l_465) = (l_463 = g_462);
            for (g_142.f0 = 0; (g_142.f0 <= 6); g_142.f0 += 1)
            { 
                int32_t **l_468[6];
                int32_t **l_469 = (void*)0;
                int32_t **l_470 = (void*)0;
                int32_t **l_471 = (void*)0;
                int32_t **l_472 = &l_343[2];
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_468[i] = &l_343[4];
                g_20[l_358][g_70][(l_358 + 1)] &= p_34;
                if (l_466[2][4])
                    continue;
                (*l_472) = l_467;
                g_475 = g_473;
            }
        }
    }
    return (***l_433);
}



static uint32_t  func_37(int8_t * p_38, union U2  p_39, uint32_t  p_40, int16_t  p_41, int32_t * p_42)
{ 
    int8_t *l_87 = (void*)0;
    int32_t l_93 = 0x93315705L;
    int32_t l_109 = 0xC2773854L;
    int32_t *l_120 = (void*)0;
    int32_t **l_129 = (void*)0;
    int32_t l_165[5];
    int64_t l_167 = 0xD9127033AF2323EBLL;
    int8_t l_168 = 3L;
    uint64_t l_169 = 1UL;
    union U4 l_172 = {-1L};
    int32_t * const l_174 = &g_175;
    int32_t * const *l_173 = &l_174;
    uint8_t l_183[7] = {0UL,0x6CL,0x6CL,0UL,0x6CL,0x6CL,0UL};
    uint32_t l_323 = 0UL;
    uint8_t l_331 = 1UL;
    int i;
    for (i = 0; i < 5; i++)
        l_165[i] = 0L;
    return g_232[0].f4;
}



static int8_t * func_43(union U3  p_44, int64_t  p_45)
{ 
    uint32_t l_62[7];
    uint32_t *l_63 = &g_64;
    int32_t *l_67 = &g_20[1][1][1];
    int8_t *l_68 = &g_46[3];
    int32_t *l_69 = &g_70;
    int i;
    for (i = 0; i < 7; i++)
        l_62[i] = 0x3552E296L;
    (*l_69) = (p_44.f1 , ((((safe_add_func_int32_t_s_s(p_45, 0xBAA2DF50L)) < p_44.f1) >= (safe_add_func_int8_t_s_s(((*l_68) = (safe_sub_func_int16_t_s_s((((l_62[0] && l_62[0]) && (((((*l_63)--) >= (((((((*l_67) ^= l_62[0]) > 0xDD2E7865L) <= 18446744073709551612UL) , 0xCCFBL) >= l_62[6]) , p_45)) != l_62[2]) != g_12.f0.f0)) != p_44.f1), 0UL))), 255UL))) | 0xCC78L));
    return l_68;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12.f0.f0, "g_12.f0.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_20[i][j][k], "g_20[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);

    }
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_98[i][j][k], "g_98[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_118[i][j][k].f0, "g_118[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_232[i].f0, "g_232[i].f0", print_hash_value);
        transparent_crc(g_232[i].f1, "g_232[i].f1", print_hash_value);
        transparent_crc(g_232[i].f2, "g_232[i].f2", print_hash_value);
        transparent_crc(g_232[i].f3.f0, "g_232[i].f3.f0", print_hash_value);
        transparent_crc(g_232[i].f4, "g_232[i].f4", print_hash_value);

    }
    transparent_crc(g_474.f0, "g_474.f0", print_hash_value);
    transparent_crc(g_474.f1, "g_474.f1", print_hash_value);
    transparent_crc(g_476.f0, "g_476.f0", print_hash_value);
    transparent_crc(g_476.f1, "g_476.f1", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_626[i][j], "g_626[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_706.f0.f0, "g_706.f0.f0", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1142, "g_1142", print_hash_value);
    transparent_crc(g_1198, "g_1198", print_hash_value);
    transparent_crc(g_1264, "g_1264", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1395, "g_1395", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1429[i][j], "g_1429[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1505.f0.f0, "g_1505.f0.f0", print_hash_value);
    transparent_crc(g_1514, "g_1514", print_hash_value);
    transparent_crc(g_1696, "g_1696", print_hash_value);
    transparent_crc(g_1726, "g_1726", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
