// SPDX-License-Identifier: MIT
// cctest_csmith_e23b3603.c --- cctest case csmith_e23b3603 (csmith seed 3795531267)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x668f84dc */
/* @exp_ticks 0x5459 */

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

// Options:   -s 3795531267 -o /tmp/csmith_gen_ku4b0twb/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
   int16_t  f1;
   struct S0  f2;
};


static int32_t g_3 = (-10L);
static uint16_t g_29 = 0x4B66L;
static int16_t g_33[5][4][5] = {{{0xC4FFL,(-4L),0x2B87L,(-1L),0x9068L},{0xFF81L,(-1L),(-2L),(-1L),0xC99FL},{0xC4FFL,0x9068L,0x2B87L,0x2B87L,0x9068L},{3L,(-1L),0L,(-1L),(-4L)}},{{0xC4FFL,(-4L),0x2B87L,(-1L),0x9068L},{0xFF81L,(-1L),(-2L),(-1L),0xC99FL},{0xC4FFL,0x9068L,0x2B87L,0x2B87L,0x9068L},{3L,(-1L),0L,(-1L),(-4L)}},{{0xC4FFL,(-4L),0x2B87L,(-1L),0x9068L},{0xFF81L,0x5F51L,0xC99FL,(-1L),2L},{1L,(-7L),(-4L),(-4L),(-7L)},{0x44FFL,0x5F51L,(-4L),(-1L),(-1L)}},{{1L,0x1D69L,(-4L),0x9068L,(-7L)},{0xBF2AL,0x5F51L,0xC99FL,(-1L),2L},{1L,(-7L),(-4L),(-4L),(-7L)},{0x44FFL,0x5F51L,(-4L),(-1L),(-1L)}},{{1L,0x1D69L,(-4L),0x9068L,(-7L)},{0xBF2AL,0x5F51L,0xC99FL,(-1L),2L},{1L,(-7L),(-4L),(-4L),(-7L)},{0x44FFL,0x5F51L,(-4L),(-1L),(-1L)}}};
static int8_t g_35 = (-10L);
static uint32_t g_36 = 0x4DD9CEC6L;
static uint16_t g_47[5][2][1] = {{{0x128BL},{8UL}},{{0x15AEL},{0x15AEL}},{{8UL},{0x128BL}},{{8UL},{0x15AEL}},{{0x15AEL},{8UL}}};
static int32_t g_64 = 0L;
static uint16_t g_65 = 0UL;
static uint8_t g_86 = 9UL;
static int16_t g_91[3] = {0x481CL,0x481CL,0x481CL};
static int16_t g_94 = 0xA6B2L;
static uint16_t g_95[2] = {0x9FB5L,0x9FB5L};
static int8_t g_102 = 0xD2L;
static union U1 g_129 = {-6L};



static union U1  func_1(void);
static int32_t  func_12(struct S0  p_13, int8_t  p_14, uint32_t  p_15, int32_t  p_16);
static int32_t  func_19(uint32_t  p_20);
static int32_t  func_48(uint8_t  p_49, int32_t  p_50, const uint64_t  p_51, int64_t  p_52, uint32_t  p_53);




static union U1  func_1(void)
{ 
    uint16_t l_2[4];
    int32_t l_10 = 0x979B3895L;
    struct S0 l_17[4][1] = {{{0x08AF066BL}},{{0x08AF066BL}},{{0x08AF066BL}},{{0x08AF066BL}}};
    int i, j;
    for (i = 0; i < 4; i++)
        l_2[i] = 0x45F1L;
    for (g_3 = 0; (g_3 <= 3); g_3 += 1)
    { 
        int16_t l_11 = 0xB441L;
        int32_t l_92 = 8L;
        int8_t l_126 = 0xB2L;
        int i;
        if ((65533UL || (l_2[g_3] , ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x98L, (l_10 ^= 247UL))), 1)) > l_2[1]), l_11)) >= 0x6950L))))
        { 
            int16_t l_18 = (-1L);
            int32_t l_93 = 1L;
            l_93 = (l_92 &= ((((((((g_91[2] |= ((func_12(l_17[0][0], l_18, g_3, func_19(((safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(0UL, 0x7497L)) <= l_2[3]), (-9L))) <= l_18))) , 0xF21D7ACA13C84519LL) > 0UL)) <= g_65) ^ l_2[1]) ^ 0L) , l_11) < 250UL) > l_2[2]) & 3UL));
        }
        else
        { 
            uint64_t l_108 = 1UL;
            int32_t l_128 = 0x5712EA86L;
            for (g_86 = 0; (g_86 <= 3); g_86 += 1)
            { 
                uint32_t l_100 = 0UL;
                uint64_t l_117 = 7UL;
                --g_95[1];
                g_64 = (g_102 &= ((((((((safe_sub_func_uint8_t_u_u(8UL, l_100)) , ((g_94 != (+0x377D1C13L)) == 0xBA90BB76L)) & 0x6A3B40187A30E593LL) <= 0x47AAA1B4L) || g_3) < 0xCCFC7CCEL) , 0x564EE88CA977D591LL) <= g_64));
                g_64 ^= ((!((0x1A6072D4B5270F73LL | (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((0x35BBL != (g_94 |= l_108)) != (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s(((((g_65 != l_17[0][0].f0) , g_33[1][0][4]) <= l_11) > l_117), g_33[0][1][4])), 0xDA3DCFAEA6509D46LL)), 7)), 10))), l_2[g_3])), g_36))) && l_92)) >= l_108);
            }
            for (g_29 = 0; (g_29 <= 3); g_29 += 1)
            { 
                uint64_t l_127 = 18446744073709551615UL;
                l_128 &= (safe_add_func_uint32_t_u_u(((l_92 | ((safe_add_func_int64_t_s_s(g_95[1], (safe_lshift_func_int16_t_s_u(l_2[3], ((l_126 != l_127) & 0x6806L))))) & 0x73L)) | 0UL), 0xF61EE9EDL));
            }
        }
        return g_129;
    }
    for (g_94 = 1; (g_94 >= 0); g_94 -= 1)
    { 
        union U1 l_130 = {-4L};
        return l_130;
    }
    return g_129;
}



static int32_t  func_12(struct S0  p_13, int8_t  p_14, uint32_t  p_15, int32_t  p_16)
{ 
    int32_t l_30 = 0L;
    uint32_t l_89 = 0x9CA810D8L;
    struct S0 l_90[2] = {{0x86F5C60DL},{0x86F5C60DL}};
    int i;
    if ((((func_19((func_19(l_30) , 4294967295UL)) > 7UL) < 0x205E60D1L) , 1L))
    { 
        int8_t l_31[1][2][4] = {{{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)}}};
        int i, j, k;
        for (g_29 = 0; (g_29 <= 0); g_29 += 1)
        { 
            int8_t l_34 = 4L;
            int32_t l_79 = (-2L);
            if (l_30)
            { 
                uint8_t l_32[4][2] = {{0x91L,0xCCL},{0xCCL,0x91L},{0xCCL,0xCCL},{0x91L,0xCCL}};
                int i, j;
                l_32[3][0] = (((p_15 != p_16) && 0xFF43993911E745C5LL) , 0x085CA7DBL);
            }
            else
            { 
                if (p_15)
                    break;
                g_33[0][1][4] ^= 0xAB1B5760L;
                p_16 = (g_3 ^ ((g_36--) ^ ((safe_rshift_func_uint8_t_u_u((1L < ((safe_sub_func_int32_t_s_s(p_16, ((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((g_47[0][0][0] = 0xB304L) , 0x80DAL), p_16)), p_15)) , p_14))) || 0L)), 2)) || (-3L))));
            }
            if (l_30)
                break;
            l_79 = func_48(((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_35, (safe_rshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s(((g_3 > (safe_sub_func_int32_t_s_s((g_64 ^= (g_33[0][3][2] , g_36)), 4294967295UL))) == l_34), 1L)) & p_13.f0) ^ g_65), l_34)))), l_30)) < g_33[0][1][4]) & l_30) == l_31[0][0][3]), p_15, g_36, l_31[0][1][1], p_15);
            for (p_16 = 0; (p_16 >= 0); p_16 -= 1)
            { 
                int64_t l_80 = 0x88C485E2798E9ECALL;
                l_80 |= p_13.f0;
            }
        }
    }
    else
    { 
        int16_t l_85 = 1L;
        for (p_16 = 0; (p_16 <= 16); ++p_16)
        { 
            for (g_64 = 0; (g_64 == 18); g_64 = safe_add_func_uint16_t_u_u(g_64, 6))
            { 
                if (g_33[0][1][4])
                    break;
            }
        }
        g_86--;
        l_30 = l_89;
    }
    l_30 |= (-2L);
    l_90[0] = p_13;
    return p_15;
}



static int32_t  func_19(uint32_t  p_20)
{ 
    uint8_t l_25 = 8UL;
    int64_t l_28[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_28[i][j] = 0xEB7E5950169FF9E6LL;
    }
    --l_25;
    for (l_25 = 0; l_25 < 2; l_25 += 1)
    {
        for (p_20 = 0; p_20 < 1; p_20 += 1)
        {
            l_28[l_25][p_20] = 0xB9A67B9C5C935CB5LL;
        }
    }
    return g_29;
}



static int32_t  func_48(uint8_t  p_49, int32_t  p_50, const uint64_t  p_51, int64_t  p_52, uint32_t  p_53)
{ 
    uint64_t l_72 = 6UL;
    int32_t l_75[4] = {0xACC98CB2L,0xACC98CB2L,0xACC98CB2L,0xACC98CB2L};
    int32_t l_76 = 4L;
    int i;
    l_76 = ((safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u(0x945F7E1EL, (safe_lshift_func_uint16_t_u_u(0x4E0DL, (l_72 = 0x8E9DL))))), ((safe_add_func_int64_t_s_s(((l_75[0] = (l_75[0] & p_52)) | 0L), p_53)) ^ p_50))) <= 0xECF96537570C98F2LL);
    p_50 = (safe_lshift_func_int8_t_s_u((-1L), 1));
    return g_29;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_33[i][j][k], "g_33[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_47[i][j][k], "g_47[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2.f0, "g_129.f2.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
